#include<iostream>
#include<memory>
#include<tchar.h>
using namespace std;


class CTest 
{
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunc() { cout << "TestFunc()" << endl; }
};


int _tmain() 
{
	unique_ptr<CTest>ptr1(new CTest);

	//�Ʒ� �ڵ���� �����ϸ� ��� ������ ������ �߻��Ѵ�.
	//unique_ptr<CTest ptr2(ptr1);
	//ptr2 = ptr1;

	return 0;
}


