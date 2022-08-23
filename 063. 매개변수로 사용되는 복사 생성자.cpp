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

	//��� 1. CTestData(const CTestData& rhs) = delete; �� ���� �����ڸ� �׳� �����ع�����.

	//�б� ������ ����� �޼���
	int GetData() const { return m_nData; };

	//��� ������ ���⸦ �õ��ϴ� �޼���
	void SetData(int nParam) { m_nData = nParam; };

	

};


void TestFunc(const CTestData &param) 
{

	cout << "TestFunc()" << endl;


	//�ظ��ؼ��� Ŭ������ �Ű������� �Ѱ��� ��������� �����ض� ��¥
	//param.SetData(20);

}


int _tmain() 
{

	cout << "****begin*****" << endl;
	CTestData a(10);
	TestFunc(a);

	//�Լ� ȣ�� �� a�� ���� ����Ѵ�.
	cout << "a : " << a.GetData() << endl;

	cout << "******END******" << endl;

	return 0;

}