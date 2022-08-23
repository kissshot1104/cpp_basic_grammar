#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
protected:
	char m_nData = 0;
public:
	explicit CMyData(int nParam) : m_nData(nParam) {}

	CMyData operator+(const CMyData& rhs) 
	{
		return CMyData(m_nData + rhs.m_nData);
	}
	

	CMyData& operator=(const CMyData& rhs) 
	{
		m_nData = rhs.m_nData;

		return *this;
	}

	operator int() { return m_nData; }


};

class CMyDataEx : public CMyData 
{
public:
	CMyDataEx(int nParam) : CMyData(nParam) {}

	using CMyData::operator+;
	using CMyData::operator=;
	CMyDataEx operator+(const CMyDataEx& rhs) 
	{
		return CMyDataEx(static_cast<int>(CMyData::operator+(rhs)));
	}
};


int _tmain() 
{
	CMyData a(3), b(4);
	cout << a + b << endl;

	CMyDataEx c(3), d(4), e(0);

	//CMyDataEx 클래스에 맞는 단순 대입 연산자가 없어서 컴파일 오류가 발생한다.
	e = c + d;
	cout << e << endl;


	return 0;
}