#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CTest 
{
public:
	//����Ʈ ������ ����
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
//�̷� ������ ���ø��� ����� �� �ʿ��Ѵٰ� �Ѵ�.