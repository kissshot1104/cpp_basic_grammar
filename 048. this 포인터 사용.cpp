#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
private:
	int m_nData;
public:
	CMyData(int nParam) : m_nData(nParam) {};
	void PrintData() 
	{

		//m_nData�� ���� ����Ѵ�.
		cout << m_nData << endl;

		//CMyData Ŭ������ ����� m_nData�� ���� ����Ѵ�.
		cout << CMyData::m_nData << endl;

		//�޼��带 ȣ���� �ν��Ͻ��� m_nData��� ���� ����Ѵ�.
		cout << this->m_nData << endl;

		//�޼��带 ȣ���� �ν��Ͻ��� CMyData Ŭ���� ��� m_nData�� ����Ѵ�.
		cout << this->CMyData::m_nData << endl;

	}

};

int _tmain() 
{

	CMyData a(5), b(10);
	a.PrintData();
	b.PrintData();

}