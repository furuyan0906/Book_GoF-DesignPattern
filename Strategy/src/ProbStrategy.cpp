#include  <random>
#include  <cstdint>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"
#include  "ProbStrategy.hpp"


ProbStrategy::ProbStrategy(std::uint32_t seed)
	: m_engine(seed), m_prevHandValue(0), m_currentHandValue(0)
{
}

Hand* ProbStrategy::nextHand(void)
{
	std::uniform_int_distribution<int> dist(0, getSum(m_currentHandValue));
	int bet = dist(m_engine);
	int handvalue = 0;

	if(bet < m_history[m_currentHandValue][0])
		handvalue = 0;
	else if(bet < m_history[m_currentHandValue][0] + m_history[m_currentHandValue][1])
		handvalue = 1;
	else
		handvalue = 2;

	m_prevHandValue = m_currentHandValue;
	m_currentHandValue = handvalue;

	return Hand::getHand(handvalue);
}

void ProbStrategy::study(bool win)
{
	if(win)
		// m_prevHandValue->m_currentHandValueの手で勝った
		m_history[m_prevHandValue][m_currentHandValue]++;
	else
		// m_prevHandValue->m_currentHandValueの手で勝った 
		// m_prevHandValue->(m_currentHandValue + 1) % 3の手なら勝ってた
		m_history[m_prevHandValue][(m_currentHandValue + 1) % 3]++;
}

int ProbStrategy::getSum(int hv)
{
	int sum = 0;

	for(int i = 0; i < 3; i++)
		sum += m_history[hv][i];

	return sum;
}

