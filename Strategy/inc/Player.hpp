ifndef  H__PLAYER__H
#define  H__PLAYER__H


#include  <string>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"

class Player
{
	private:
		std::string m_name;
		StrategyInterface *m_strategy;
		int m_wincount;
		int m_losecount;
		int m_gamecount;
	
	public:
		Player(std::string name, StrategyInterface *strategy);
		Hand* nextHand(void);
		void win(void);
		void lose(void);
		void even(void);
		std::string toString(void);
};


#endif  /* H__PLAYER__H */
