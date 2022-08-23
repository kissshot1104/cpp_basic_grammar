#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

class CALC 
{
private:
	int* m_nData = nullptr;
public:

	CALC() {};
	~CALC() {}
	CALC(int param) 
	{
		m_nData = new int(param);
	}

	operator int() 
	{
		return *m_nData;
	}

	CALC& operator=(const CALC& rhs) 
	{

		*m_nData = *rhs.m_nData;

		return  *this;
	}
	CALC& operator+(const CALC& rhs) 
	{
		CALC* s_cal = new CALC(0);
		
		*s_cal->m_nData = *this->CALC::m_nData + *rhs.m_nData;
		
			

		return *s_cal;
	}

};

int _tmain() 
{

	CALC a(3), b(5), c(7);

	a = b;
	c = a + b;

	cout << a << endl;
	cout << c << endl;
}