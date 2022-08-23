#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CTest 
{

public:
	//CTest 클래스의 '생성자 함수' 선언 및 정의
	
	CTest()
	{
		//인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화한다.
		m_n_data = 10;
	}

	//멤버 데이터 선언
	int m_n_data;

	void c_m_PrintData(void) 
	{

		cout << m_n_data << endl;

	}

};

int _tmain() 
{

	CTest t;
	t.c_m_PrintData();

	return 0;

}

