#include  <string>

#include  "Hand.hpp"
#include  "StrategyInterface.hpp"
#include  "Player.hpp"


Player::Player(std::string name, StrategyInterface *strategy)
	: m_name(name), m_strategy(strategy), m_wincount(0), m_losecount(0), m_gamecount(0)
{
}

Hand* Player::nextHand(void)
{
	// 使う戦術に応じて次の手を打つ
	return m_strategy->nextHand();
}

void Player::win(void)
{
	m_strategy->study(true);

	// オーバーフロー対策は省略
	m_wincount++;
	m_gamecount++;
}

void Player::lose(void)
{
	m_strategy->study(false);

	// オーバーフロー対策は省略
	m_losecount++;
	m_gamecount++;
}

void Player::even(void)
{
	// 引き分けは学習なし

	// オーバーフロー対策は省略
	m_gamecount++;
}

std::string Player::toString(void)
{
	// [XX:x games, y win, z lose]
	return ("[" + m_name + ":" + std::to_string(m_gamecount) + " games, " + std::to_string(m_wincount) + " win, " + std::to_string(m_losecount) + " 'lose" + "]");
}

