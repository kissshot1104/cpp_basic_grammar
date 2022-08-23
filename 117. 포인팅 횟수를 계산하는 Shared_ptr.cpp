#include<iostream>
#include<tchar.h>
#include<memory>//shared_ptr 클래스를 사용하기 위함
using namespace std;

class CTest 
{
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunc() { cout << "TestFunc()" << endl; }
};

void Free(CTest* c) { 
	cout << "freefunc" << endl;
	delete c; }

int _tmain() 
{
	cout << "*****begin******" << endl;
	shared_ptr<CTest>ptr1(new CTest,Free);

	//한 대상을 두 포인터로 포인팅한다.
	cout << "Counter: " << ptr1.use_count() << endl;
	{

		shared_ptr<CTest>ptr2(ptr1);


		//한 대상을 두 포인터로 포인팅한다.
		cout << "COunter: " << ptr1.use_count() << endl;
		ptr2->TestFunc();

	}
	//한 포인터가 소멸했으므로 포인팅 개수가 1감소한다.
	cout << "Counter: " << ptr1.use_count() << endl;
	ptr1->TestFunc();
	cout << "******END*******" << endl;
	

	//결국 카운터가 0이 되면 대상 객체를 소멸시킨다.
	return 0;
}