#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;

class CMyData 
{
private:
	int* m_pnData = nullptr;
public:
	CMyData(int nParam) 
	{

		cout << "=====持失切=====" << endl;

		this->CMyData::m_pnData = new int;
		
		*this->CMyData::m_pnData = nParam;

	}

	CMyData(const CMyData& rhs) 
	{

		cout << "=====差紫 持失切=====" << endl;
		
		this->CMyData::m_pnData = new int;

		*this->CMyData::m_pnData = *rhs.m_pnData;

	}

	CMyData& operator=(const CMyData& rhs) 
	{

		cout << "=====opertator 持失切 ======" << endl;
		
		*this->CMyData::m_pnData = *rhs.m_pnData;

		return *this;

	}

	~CMyData() 
	{
		if(this->CMyData::m_pnData != nullptr)
			delete this->CMyData::m_pnData;

		this->CMyData::m_pnData = nullptr;
	}

	int GetData() 
	{
		if (this->CMyData::m_pnData != NULL)
			return *this->CMyData::m_pnData;

		return 0;

	}
	
};


int _tmain()
{

	CMyData a(10);
	CMyData b(20);
	CMyData c(a);
	a = b;

	
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	cout << c.GetData() << endl;
}