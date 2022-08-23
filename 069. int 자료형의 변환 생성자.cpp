#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


//������ �ڵ�
class CTestData 
{

private:
	int m_nData = 0;

public:
	//�Ű������� �ϳ����� �����ڴ� ����ȯ�� �����ϴ�.
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
	//int �ڷ������� CTestData�������� ��ȯ�� �� �ִ�.
	TestFunc(5);		//����ȯ�� �������ϰ� explicit

	cout << "=======END=======" << endl;
	return 0;

}