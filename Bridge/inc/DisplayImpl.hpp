#ifndef  H__DISPLAY_IMPL__H
#define  H__DISPLAY_IMPL__H


class DisplayImpl
{
	public:
		virtual ~DisplayImpl(){}
		virtual void rawOpen() = 0;
		virtual void rawPrint() = 0;
		virtual void rawClose() = 0;
};


#endif  /* H__DISPLAY_IMPL__H */
