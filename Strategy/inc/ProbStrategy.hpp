#ifndef  H__PROB_STRATEGY__H
#define  H__PROB_STRATEGY__H


#include  <random>
#include  <cstdint>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"

class ProbStrategy : public StrategyInterface
{
	private:
		std::mt19937 m_engine;
		int m_prevHandValue;
		int m_currentHandValue;
		int m_history[3][3] = {
			{1, 1, 1},
			{1, 1, 1},
			{1, 1, 1}
		};
		int getSum(int hv);

	public:
		ProbStrategy(std::uint32_t seed);
		Hand* nextHand(void);
		void study(bool win);
};

#endif  /* H__PROB_STRATEGY__H */
