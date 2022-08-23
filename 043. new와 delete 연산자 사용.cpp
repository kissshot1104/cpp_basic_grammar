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
	//delete 연산자를 이용해 객체를 삭제한다.
	delete PCTest;
	//삭제를 하지않으면 소멸자는 호출되지않는다.
	cout << "End" << endl;

	return 0;


	
}