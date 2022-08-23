#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;


class CTest 
{

public:
	//두 개의 멤버 데이터 선언
	int c_m_n_data1, c_m_n_data2;

	//생성자 초기화 목록을 이용한 멤버 초기화
	CTest()
		:c_m_n_data1(10), c_m_n_data2(20) 
	{};

	//멤버 함수 선언 및 정의

	void c_m_f_PrintData(void) 
	{
		cout << c_m_n_data1 << endl;
		cout << c_m_n_data2 << endl;
	}


};

int _tmain() 
{

	CTest t;
	t.c_m_f_PrintData();

	return 0;

}