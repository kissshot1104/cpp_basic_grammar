#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTest 
{

	int m_n_data;

public:
	CTest() 
	{
		cout << "CTest::Ctest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}

};

int _tmain() 
{

	cout << "Begin" << endl;
	CTest* PCTest = new CTest;
	cout << "Test" << endl;
	//delete �����ڸ� �̿��� ��ü�� �����Ѵ�.
	delete PCTest;
	//������ ���������� �Ҹ��ڴ� ȣ������ʴ´�.
	cout << "End" << endl;

	return 0;


	
}