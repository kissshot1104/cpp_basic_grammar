#include<iostream>
#include<string>
#include<tchar.h>

using namespace std;

class CRefTest 
{
private:

	int &m_ndata;

public:
	
	//������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ�Ѵ�.
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