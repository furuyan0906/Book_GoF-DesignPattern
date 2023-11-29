#ifndef  H__ENTRY__H
#define  H__ENTRY__H


#include  <string>

class Entry
{
	public:
		virtual ~Entry(){}
		virtual std::string getName(void) = 0;
		virtual int getSize(void) = 0;
		// @note  Entryクラスでのadd()例外を投げるだけ. 必要ならオーバーライドすること
		virtual Entry* add(Entry *entry); 
		std::string toString(void);
		// @note  サブクラスで表示方法を実装
		//        外部非公開(本当はprotectedにしたい)
		virtual void printList(std::string prefix) = 0;
};


#endif  /* H__ENTRY__H */
