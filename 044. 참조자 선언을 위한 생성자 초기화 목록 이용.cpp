#include<iostream>
#include<string>
#include<tchar.h>

using namespace std;

class CRefTest 
{
private:

	int &m_ndata;

public:
	
	//참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
	CRefTest(int &rParam) : m_ndata(rParam) {};
	int GetData(void) { return m_ndata; }

};

int _tmain() 
{

	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	a = 20;
	cout << t.GetData() << endl;

	return 0;

}