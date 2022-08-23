#include<iostream>
#include<tchar.h>
using namespace std;

class CMyDataA
{
protected:
	char* m_psz_data;
public:
	CMyDataA() {
		cout << "CMyDataA()" << endl;
		m_psz_data = new char[32];

	}
	~CMyDataA() {
		cout << "~CMyDataA()" << endl;
		
		delete m_psz_data;
	}

};

class CMyDataB : public CMyDataA
{
protected:
	char* m_psz_data;
public:
	CMyDataB() {
		cout << "CMyDataA()" << endl;
		m_psz_data = new char[32];

	}
	~CMyDataB() {
		cout << "~CMyDataA()" << endl;
		
	}

};

class CMyDataC :public CMyDataB 
{
public:
	CMyDataC() {
		cout << "CMyDataC()" << endl;
	}
	~CMyDataC() {
		cout << "~CMyDataC()" << endl;
		
		delete m_psz_data;

	}

	
};

int _tmain() 
{
	CMyDataC c;
}