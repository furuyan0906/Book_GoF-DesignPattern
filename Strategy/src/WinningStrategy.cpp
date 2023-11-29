#include  <random>
#include  <cstdint>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"
#include  "WinningStrategy.hpp"


WinningStrategy::WinningStrategy(std::uint32_t seed)
	: m_engine(seed), m_won(false)
{
}

Hand* WinningStrategy::nextHand(void)
{
	if(!m_won)
		m_prevHand = Hand::getHand(m_engine() % 3);

	return m_prevHand;
}

void WinningStrategy::study(bool win)
{
	m_won = win;
}

