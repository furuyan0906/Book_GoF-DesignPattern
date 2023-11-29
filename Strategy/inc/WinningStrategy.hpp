#ifndef  H__WINNING_STRATEGY__H
#define  H__WINNING_STRATEGY__H


#include  <random>
#include  <cstdint>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"

class WinningStrategy : public StrategyInterface
{
	private:
		std::mt19937 m_engine;
		bool m_won;
		Hand* m_prevHand;

	public:
		WinningStrategy(std::uint32_t seed);
		Hand* nextHand(void);
		void study(bool win);
};


#endif  /* H__WINNING_STRATEGY__H */
