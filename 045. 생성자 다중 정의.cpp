#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
private:
	int m_ndata;

public:
	//����Ʈ �����ڴ� ����.
	//�Ű������� int �ϳ��� ������ �Լ� ���� �� ����
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