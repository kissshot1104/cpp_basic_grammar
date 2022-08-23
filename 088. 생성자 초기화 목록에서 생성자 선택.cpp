#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData 
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	CMyData(int nParam) { cout << "CMyData(int)" << endl; }
	CMyData(double dParam) { cout << "CMyData(double)" << endl; }
};


class CMyDataEx : public CMyData 
{
public:
	using CMyData::CMyData;
	CMyDataEx() { cout << "CMyDataEx()" << endl; }

	//기본 클래스의 세 가지 생성자 중에서 int 변수를 갖는 생성자를 선택했다.
	CMyDataEx(int nParam) : CMyData(nParam) 
	{
		cout << "CMyDatEx(int)" << endl;
	}

	//기본 클래스의 디폴트 생성자를 선택했다.
	CMyDataEx(double dParam) : CMyData()
	{
		cout << "CMyDataEx(double)" << endl;
	}

};


int _tmain() 
{
	CMyDataEx a;
	cout << "*************************" << endl;
	CMyDataEx b(5);
	cout << "************************" << endl;
	CMyDataEx c(3.3);


	return 0;
}