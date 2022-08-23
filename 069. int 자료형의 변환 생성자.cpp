#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


//제작자 코드
class CTestData 
{

private:
	int m_nData = 0;

public:
	//매개변수가 하나뿐인 생성자는 형변환이 가능하다.
	explicit CTestData(int nParam) :m_nData(nParam) 
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData) 
	{

		cout << "CTestData(const CTestData &)" << endl;

	}

	operator int(void) { return this->CTestData::m_nData; }

	~CTestData() { cout << "~CTestData()" << endl; }
	

	int GetData() const { return this->CTestData::m_nData; };
	void SetData(int nParam) { this->CTestData::m_nData = nParam;}

};


void TestFunc(const CTestData& param) 
{

	cout << "TestFunc(): " << param.GetData() << endl;

}

int _tmain() 
{
	cout << "=======BEGIN=======" << endl;
	//int 자료형에서 CTestData형식으로 변환될 수 있다.
	TestFunc(5);		//형변환을 하지못하게 explicit

	cout << "=======END=======" << endl;
	return 0;

}