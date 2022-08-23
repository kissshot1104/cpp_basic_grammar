#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTestData 
{
private:
	int m_nData = 0;
public:
	CTestData() { cout << "CTestData()" << endl; }
	~CTestData() { cout << "~CTestData()" << endl; }

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData) {
		cout << "CTestData(const CTestData &)" << endl;
	}


	//이동 생성자
	CTestData(CTestData&& rhs) : m_nData(rhs.m_nData) 
	{

		cout << "CTestData(const CTestData &&)" << endl;

	}

	CTestData& operator =(const CTestData&) = default;

	int GetData()const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

};

CTestData TestFunc(int nParam) 
{

	cout << "**TestFunc(): begin***" << endl;
	CTestData a;
	a.SetData(nParam);
	cout << "***TestFunc(): End*******" << endl;

	return a;

}

int _tmain() 
{

	CTestData b;
	cout << "*Before****************" << endl;

	b = TestFunc(20);
	cout << "*After*********************" << endl;

	CTestData c(b);

	return 0;

}