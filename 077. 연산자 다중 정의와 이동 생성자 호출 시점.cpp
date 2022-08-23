#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;


class CMyData 
{

private:
	int m_nData = 0;
public:
	//변환 생성자
	CMyData(int nParam) : m_nData(nParam) 
	{
		cout << "CMyData(int)" << endl;
	}

	//복사 생성자
	CMyData(const CMyData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &)" << endl;
	}

	//이동 생성자
	CMyData(const CMyData&& rhs) : m_nData(rhs.m_nData) 
	{
		cout << "CMyData(const CMyData &&)" << endl;
	}
	~CMyData() { cout << "~CMyData***********************" << endl; }

	//형변환
	operator int() { return m_nData; }

	// +
	CMyData& operator+(const CMyData& rhs)
	{
		cout << "operator+" << endl;
		//CMyData result(0);
		CMyData* result = new CMyData(0);
		result->m_nData = this->m_nData + rhs.m_nData;
		cout << this->CMyData::m_nData << endl;
		cout <<"result : "<<result << endl;
		cout <<"this : "<< this << endl;
		cout << "rhs : "<<&rhs << endl;
		
		return *result;
	}

	CMyData& operator=(const CMyData& rhs) 
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData;
		cout << "result : "<<&rhs << endl;
		cout << "this2 : "<<this << endl;
		
		return *this;
	}
	
};

int _tmain() 
{

	cout << "*******begin*******" << endl;
	CMyData a(0), b(3), c(4);
	
	//b + c연산을 싱행하면 이름 없는 임시 객체가 만들어지며
	//a에 대입하는것은 이 임시 객체이다

	a = b + c;
	cout << a << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << "******END*******" << endl;

	
	return 0;

}