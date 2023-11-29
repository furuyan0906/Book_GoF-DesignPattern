#ifndef  H__HAND__H
#define  H__HAND__H


#include  <string>

/* Privateコンストラクタなので, Handクラス以外ではインスタンス生成できない */
class Hand
{
	public:
		static int HandValueRock;  // 0
		static int HandValuePaper; // 1
		static int HandValueScisor;  // 2
		static Hand* getHand(int handvalue);
		bool isStrongerThan(Hand *hand);
		bool isWeakerThan(Hand *hand);
		std::string toString(void);

	private:
		/* 3を法としてグー,チョキ,パーで巡回する */
		static Hand* m_hand[3];
		static std::string m_name[3];
		Hand(int handvalue);
		~Hand();
		int m_handvalue;
		int fight(Hand *hand);
};


#endif  /* H__HAND__H */
