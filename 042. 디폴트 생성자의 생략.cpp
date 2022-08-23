#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;
class CTest 
{

	int m_ndata;

public:
	//생성자의 매개변수로 전달된 값으로 멤버변수를 초기화한다.

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

	//CTest c <- 이렇게는 사용할 수 없다 이유는 디폴트 생성자가 없기때문이다
}