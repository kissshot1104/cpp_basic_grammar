#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CTest 
{
private:

	int m_nData;
	static int m_nCount;

public:

	CTest(int nParam) : m_nData(nParam) { m_nCount++; };	//3. CTest�� ������ 3�� �������� ���� m_nCount
	int GetData() { return m_nData; };
	void ResetCount() { m_nCount = 0; }

	//���� �޼��� ���� �� ����
	static int GetCount()
	{

		return m_nCount;

	}

};


int CTest::m_nCount = 1;//1. ó�� m_ncount�� 1�� �ʱ�ȭ

int _tmain() 
{

	CTest a(5), b(10),c(15);		//2. CTest�� ������ 3�� ����
	
	//���� ����� ����

	cout << a.GetCount() << endl;
	b.ResetCount();

	//���� ����� ����, �ν��Ͻ� ���̵� ���� ����
	cout << CTest::GetCount() << endl;
	cout << c.GetCount() << endl;
	

	return 0;

}

