#include<new>  //bad_alloc 클래스를 사용하기 위한 헤더
#include<iostream>
#include<tchar.h>
using namespace std;


class CTest 
{
private:
	char* m_pszData;
public:
	CTest(int nSize) 
	{
		//메모리 할당에 실패하면 예외를 던진다!.
		m_pszData = new char[nSize];
	}

	~CTest() 
	{
		delete[] m_pszData;
		cout << "정상적으로 객체가 소멸함" << endl;
	}
};


int _tmain() 
{
	try
	{
		int nSize;
		cout << "Input size: ";
		cin >> nSize;
		CTest a(nSize);
	}

	//사용자가 입력한 값을 검증 없이 그대로 사용해 객체를 생성
	catch (bad_alloc& exp) 
	{
		//시스템이 밝힌 원인을 출력한다.
		cout << exp.what() << endl;;
		cout << "ERROR : CTest()" << endl;
	}
	return 0;
}