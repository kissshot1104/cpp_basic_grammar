#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;
class CTest 
{

	int m_ndata;

public:
	//�������� �Ű������� ���޵� ������ ��������� �ʱ�ȭ�Ѵ�.

	CTest(int n_param) :m_ndata(n_param)
	{

		cout << "CTest::CTest()" << endl;

	}

	~CTest() 
	{

		cout << "~CTest::CTest()" << m_ndata << endl;

	}

};

int _tmain() 
{

	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "end" << endl;

	//CTest c <- �̷��Դ� ����� �� ���� ������ ����Ʈ �����ڰ� ���⶧���̴�
}