#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

class CTestData 
{
private:
	int m_nData = 0;
public:
	CTestData(int nParam) : m_nData(nParam) 
	{

		cout << "CTestData(int)" << endl;

	}


	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData) 
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	//방법 1. CTestData(const CTestData& rhs) = delete; 로 복사 생성자를 그냥 삭제해버린다.

	//읽기 전용인 상수형 메서드
	int GetData() const { return m_nData; };

	//멤버 변수에 쓰기를 시도하는 메서드
	void SetData(int nParam) { m_nData = nParam; };

	

};


void TestFunc(const CTestData &param) 
{

	cout << "TestFunc()" << endl;


	//왠만해서는 클래스를 매개변수로 한것은 상수형으로 참조해라 진짜
	//param.SetData(20);

}


int _tmain() 
{

	cout << "****begin*****" << endl;
	CTestData a(10);
	TestFunc(a);

	//함수 호출 후 a의 값을 출력한다.
	cout << "a : " << a.GetData() << endl;

	cout << "******END******" << endl;

	return 0;

}