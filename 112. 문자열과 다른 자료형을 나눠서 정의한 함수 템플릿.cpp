/*#include<memory>
#include<iostream>
#include<tchar.h>
using namespace std;

template<typename T>
T Add(T a, T b) { return a + b; }


//�� ���� ������ ��� char* �����̸� �� �Լ��� ��ü�ȴ�.
template< >
char* Add(char* pszLeft, char* pszRight) 
{
	int nLenLeft = strlen(pszLeft);
	int nLenRight = strlen(pszRight);
	char* pszResult = new char[nLenLeft + nLenRight + 1];


	//���� �Ҵ��� �޸𸮿� ���ڿ��� �����Ѵ�.
	strcpy_s(pszResult, nLenLeft + 1, pszLeft);
	strcpy_s(pszResult + nLenLeft, nLenRight + 1, pszRight);



	return pszResult;
}


int _tmain() 
{
	int nResult = Add<int>(3, 4);

	cout << nResult << endl;


	//char* pszResult = Add<char*>("Hello", "world");
	char * pszResult = Add<char*>(const_cast<char*>("hello"),const_cast<char*>("world"));
	cout << pszResult << endl;
	delete[] pszResult;


	return 0;
}*/

#include<iostream>
#include<string>
#include<tchar.h>
#include<memory>

using namespace std;


template <typename T>
T TestFunc(T a, T b) 
{
	cout << a + b << endl;
	return a;
}

template< >
const char* TestFunc(const char* a, const char* b)
{

	return a;
}

int _tmain() 
{

	TestFunc<int>(1, 2);
	TestFunc<const char*>("a", "b");
	

}