#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{
protected:
	int m_nData = 10;
public:
	virtual void PrintData()
	{
		cout << "CMyData: " << m_nData << endl;
	}

	void TestFunc()
	{
		cout << "***TestFunc()***" << endl;


		//실 형식의 함수가 호출된다.!
		PrintData();
		cout << "****************" << endl;
	}
};

class CMyDataEx : public CMyData 
{
public:
	//기본 클래스의 가상 함수 멤버를 재정의했다.
	//따라서 기존 정의는 무시된다.
	virtual void PrintData();

};
void CMyDataEx::PrintData()
{
	cout << "CMyDataEx : " << m_nData * 2 << endl;
}
int _tmain() 
{

	CMyDataEx a;
	a.PrintData();

	CMyData& b = a;
	

	//참조 형식에 상관없이 실 형식의 함수가 호출된다.
	b.PrintData();


	//늘 마지막에 재정의된 함수가 호출된다.
	a.TestFunc();


}