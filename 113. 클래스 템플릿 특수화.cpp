/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<tchar.h>
using namespace std;


template<typename T>
class CMyData
{
private:
	T m_Data;

public:
	CMyData(T param) : m_Data(param) {}

	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param; }
};


template< >
class CMyData<char*>
{
private:
	char* m_Data;

public:
	CMyData(const char* psz_param) 
	{
		int nLen = strlen(psz_param);
		m_Data = new char[nLen + 1];
		memset(m_Data, 0, nLen + 1);
		strcpy(m_Data, psz_param);
	}

	~CMyData() { delete[] m_Data; }
	char* GetData() const { return m_Data; };

};


int _tmain() 
{

	CMyData<char*> a("hello");
	cout << a.GetData() << endl;

	return 0;

}*/



#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<tchar.h>
using namespace std;


template<typename T>

class TestClass
{
public:
	TestClass() { cout << "T type" << endl; }

};

template< >
class TestClass <const char*>
{
public:
	TestClass() { cout << "const char*" << endl; }

};



int _tmain() 
{
	TestClass<int> a;
	TestClass<const char*> b;

}