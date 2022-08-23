#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;



class CMyData 
{

	//기본 접근 제어 지시자는 'private'이다.
	int c_m_n_data;

public:
	int c_m_f_GetData(void) { return c_m_n_data; }
	void c_m_f_SetData(int n_param) { c_m_n_data = n_param; }

};

int _tmain() 
{

	CMyData c_data;
	c_data.c_m_f_SetData(10);
	cout << c_data.c_m_f_GetData() << endl;

}