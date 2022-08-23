#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CTest 
{
public:
	//디폴트 생성자 선언
	CTest(void) = default;
	int m_ndata = 5;
	
};

//CTest::CTest(void){}

int _tmain() 
{

	CTest a;
	cout << a.m_ndata << endl;


	return 0;

}
//이런 문법은 템플릿을 사용할 때 필요한다고 한다.