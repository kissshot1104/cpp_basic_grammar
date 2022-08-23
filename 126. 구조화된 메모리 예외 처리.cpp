#include<new>  //bad_alloc Ŭ������ ����ϱ� ���� ���
#include<iostream>
#include<tchar.h>
using namespace std;


class CTest 
{
private:
	char* m_pszData;
public:
	CTest(int nSize) 
	{
		//�޸� �Ҵ翡 �����ϸ� ���ܸ� ������!.
		m_pszData = new char[nSize];
	}

	~CTest() 
	{
		delete[] m_pszData;
		cout << "���������� ��ü�� �Ҹ���" << endl;
	}
};


int _tmain() 
{
	try
	{
		int nSize;
		cout << "Input size: ";
		cin >> nSize;
		CTest a(nSize);
	}

	//����ڰ� �Է��� ���� ���� ���� �״�� ����� ��ü�� ����
	catch (bad_alloc& exp) 
	{
		//�ý����� ���� ������ ����Ѵ�.
		cout << exp.what() << endl;;
		cout << "ERROR : CTest()" << endl;
	}
	return 0;
}