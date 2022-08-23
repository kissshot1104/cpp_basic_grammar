#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

//제작자 코드
class CTestData 
{

private:
	int m_nData = 0;
	                                           
public:
	explicit CTestData(int nParam):m_nData(nParam) {}

	CTestData(const CTestData& rhs) {
		cout << "CTestData& rhs" << endl;
		this->CTestData::m_nData = rhs.m_nData;
	}
	operator int(void) { 
		cout << "operator int(void)===" << endl;
		return this->CTestData::m_nData; }
	~CTestData() {};

	int GetData(void) const
	{
		return this->CTestData::m_nData;
	}
	void SetData(int nParam) 
	{
		this->CTestData::m_nData = nParam;
	}

};


int _tmain() 
{

	CTestData a(10);
	cout << a.GetData() << endl;
	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;

	return 0;

}