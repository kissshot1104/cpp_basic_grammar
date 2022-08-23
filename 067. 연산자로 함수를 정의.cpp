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

		m_pnData = new int;
		*m_pnData = nParam;

	}

	CMyData& operator=(const CMyData& rhs) 
	{
		*this->CMyData::m_pnData = *rhs.m_pnData;

		return *this;
	}

	int GetData() 
	{
		if (m_pnData != NULL) 
		{
			return *m_pnData;
		}

		return 0;
	}
};

int _tmain() 
{

	CMyData a(10);
	CMyData b(20);

	a = b;
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

}