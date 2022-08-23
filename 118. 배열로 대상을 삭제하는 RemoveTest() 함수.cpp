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


void RemoveTest(CTest* pTest) 
{
	cout << "RemoveTest()" << endl;

	//����� �迭�� �����Ѵ�.
	delete[]pTest;
}


int _tmain() 
{
	cout << "****begin******" << endl;

	//��� ��ü�� �Ҹ��� �Լ��� ������ ����Ѵ�.
	shared_ptr<CTest>ptr(new CTest[3], RemoveTest);
	
	cout << "*****END**********" << endl;
}