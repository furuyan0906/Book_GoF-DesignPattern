#ifndef  H__STRATEGY_INTERFACE__H
#define  H__STRATEGY_INTERFACE__H


#include  "Hand.hpp"

class StrategyInterface
{
	public:
		virtual ~StrategyInterface(){}
		virtual Hand* nextHand(void) = 0;
		virtual void study(bool win) = 0;
};


#endif  /* H__STRATEGY_INTERFACE__H */
