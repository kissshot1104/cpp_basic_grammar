#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
private:
	int m_ndata;

public:
	//디폴트 생성자는 없다.
	//매개변수가 int 하나인 생성자 함수 선언 및 정의
	CMyData(int nparam) : m_ndata(nparam) {}
	CMyData(int x, int y) : m_ndata(x + y) {}

	int GetData(void) { return m_ndata; }

};

int _tmain() 
{

	CMyData t1(10);
	CMyData t2(3, 4);

	cout << "t1 : " << t1.GetData() << endl;
	cout << "t2 : " << t2.GetData() << endl;

	return 0;

}