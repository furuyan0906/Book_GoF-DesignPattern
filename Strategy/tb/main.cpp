#include  <iostream>
#include  <cstdlib>

#include  "Hand.hpp"
#include  "Player.hpp"
#include  "StrategyInterface.hpp"
#include  "WinningStrategy.hpp"
#include  "ProbStrategy.hpp"


int main(void)
{
	std::random_device seed_gen1;
	std::random_device seed_gen2;

	StrategyInterface *strategy1 = new WinningStrategy(seed_gen1());
	StrategyInterface *strategy2 = new ProbStrategy(seed_gen2());

	Player *player1 = new Player("Taro", strategy1); 
	Player *player2 = new Player("Hana", strategy2); 

	for(int i = 0; i < 10000; i++){
		Hand *hand1 = player1->nextHand();
		Hand *hand2 = player2->nextHand();

		if(hand1->isStrongerThan(hand2)){
			std::cout << "Winner: " + player1->name() << std::endl;
			player1->win();
			player2->lose();
		}
		else if(hand2->isStrongerThan(hand1)){
			std::cout << "Winner: " + player2->name() << std::endl;
			player2->win();
			player1->lose();
		}
		else{
			std::cout << "Even..." << std::endl;
			player1->even();
			player2->even();
		}
	}

	std::cout << "Total Result:" << std::endl;
	std::cout << player1->toString() << std::endl;
	std::cout << player2->toString() << std::endl;

	delete player1;
	delete player2;

	delete strategy1;
	delete strategy2;


	return EXIT_SUCCESS;
}
