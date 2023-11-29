#include  <string>
#include  <stdexcept>

#include  "Hand.hpp"


int Hand::HandValueRock = 0;
int Hand::HandValuePaper = 1;
int Hand::HandValueScisor = 2;
static const int HandValueMax = 3;

Hand* Hand::m_hand[3] = {
	new Hand(HandValueRock),
	new Hand(HandValuePaper),
	new Hand(HandValueScisor)
};

std::string m_name[3] = {
	"グー",
	"チョキ",
	"パー"
};


Hand::Hand(int handvalue)
	: m_handvalue(handvalue)
{
}

Hand::~Hand()
{
	delete m_hand[HandValueRock];
	delete m_hand[HandValuePaper];
	delete m_hand[HandValueScisor];
}

/* @note  本関数を介してのみインスタンスを取得できるので, プログラム実行中のインスタンスは3つしかない */
Hand* Hand::getHand(int handvalue)
{
	if(handvalue >= HandValueMax)
		throw std::runtime_error("Err: Outside array reference is occured.");
	return m_hand[handvalue];
}

bool Hand::isStrongerThan(Hand *hand)
{
	return fight(hand) == 1;
}

bool Hand::isWeakerThan(Hand *hand)
{
	return fight(hand) == -1;
}

std::string Hand::toString(int handvalue)
{
	if(handvalue >= HandValueMax)
		throw std::runtime_error("Err: Outside array reference is occured.");
	return m_name[handvalue];
}

int Hand::fight(Hand *hand)
{
	if(this == hand)
		// あいこ
		return 0;
	else if(((this->m_handvalue + 1) % 3) == hand->m_handvalue)
		// 勝ち
		return 1;
	else
		// 負け
		return -1;
}

