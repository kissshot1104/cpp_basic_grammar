#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTestData 
{

private:
	int m_nData =0;

	//���� �̸��� �����ϱ� ���� ���
	const char* m_pszName = nullptr;
public:
	CTestData(int nParam, const char* pszName) : m_nData(nParam), m_pszName(pszName) 
	{
		cout << "CTestData(): " << this->CTestData::m_pszName << endl;
	}

	CTestData(int a) :m_nData(a) 
	{
		cout << "CTestData(): " << this->CTestData::m_pszName << endl;
		
	}

	~CTestData() 
	{
		cout << "~CTestData(): " << this->CTestData::m_pszName << endl;
	}

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) 
	{
		cout << "CTestData(const CTestData &): " << this->CTestData::m_pszName << endl;
	}

	CTestData& operator=(const CTestData& rhs) 
	{
		cout << "operator=" << endl;
		//���� ���������� �̸�(m_pszName)�� �״�� �д�.
		this->CTestData::m_nData = rhs.m_nData;

		return *this;
	}

	int GetData() const { return this->CTestData::m_nData; }

	void SetData(int nParam) { this->CTestData::m_nData = nParam; }



};

CTestData TestFunc(int nParam) 
{
	//CTestData Ŭ���� �ν��Ͻ��� a�� ���� ������.
	//���� �Լ��� ��ȯ�Ǹ� �Ҹ��Ѵ�.
	CTestData a(nParam,"a");
	cout << "return" << endl;
	return a;
}

int _tmain() 
{

	//CTestData b(5, "b");
	cout << "*****Befor*******" << endl;

	//�Լ��� ��ȯ�Ǹ鼭 �ӽ� ��ü�� �����ƴٰ� ���� ���� �� ��� �Ҹ��Ѵ�.
	//	b = TestFunc(10);
	TestFunc(10);
	cout << "*****After*****" << endl;
	//cout << b.GetData() << endl;


}