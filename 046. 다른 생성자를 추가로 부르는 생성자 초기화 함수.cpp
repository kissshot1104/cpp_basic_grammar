#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyPoint {
private:
	int m_x = 0;
	int m_y = 0;

public:
	CMyPoint(int x)
	{
		cout << "CMyPoint(int)" << endl;
		//x 값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
		if (x > 100)
			x = 100;

		m_x = 100;
	}
	CMyPoint(int x, int y) 
		: CMyPoint(x)//x값을 검사하는 코드가 있으며로 재이용 한다.
	{

		cout << "CMyPoint(int,int)" << endl;
		//값이 200이 넘는지 검사하고 넘으면 200으로 맟춘다.
		if (y > 200)
			y = 200;

		m_y = 200;
	
	}

	void Print() 
	{
		cout << "X:" << m_x << endl;
		cout << "Y:" << m_y << endl;
	}

	~CMyPoint() {};

};

int _tmain() 
{

	//매개변수가 하나인 생성자만 호출한다.

	CMyPoint ptBegin(110);
	ptBegin.Print();

	//이번에는 두 생성자 모두 호출한다.
	CMyPoint ptEnd(50, 250);
	ptEnd.Print();

	return 0;

}
