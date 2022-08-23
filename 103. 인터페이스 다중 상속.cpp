#include<iostream>
#include<tchar.h>
using namespace std;

class CMyUSB 
{
public:
	virtual int GetUsbVersion() = 0;
	virtual int GetRansFerRate() = 0;

};


class CMySerial 
{
public:
	virtual int GetSignal() = 0;
	virtual int GetRate() = 0;
};

class CMyDevice : public CMyUSB, public CMySerial 
{
public:
	//USB인터페이스
	virtual int GetUsbVersion() { return 0; }
	virtual int GetRansFerRate() { return 0; }


	//시리얼 인터페이스
	virtual int GetSignal() { return 0; }
	virtual int GetRate() { return 0; }
};


int _tmain() 
{
	CMyDevice dev;

	return 0;
}