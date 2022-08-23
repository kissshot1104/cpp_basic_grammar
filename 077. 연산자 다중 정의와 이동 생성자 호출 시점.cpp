#include<iostream>
#include<tchar.h>
#include<string>
using namespace std;


class CMyData 
{

private:
	int m_nData = 0;
public:
	//��ȯ ������
	CMyData(int nParam) : m_nData(nParam) 
	{
		cout << "CMyData(int)" << endl;
	}

	//���� ������
	CMyData(const CMyData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &)" << endl;
	}

	//�̵� ������
	CMyData(const CMyData&& rhs) : m_nData(rhs.m_nData) 
	{
		cout << "CMyData(const CMyData &&)" << endl;
	}
	~CMyData() { cout << "~CMyData***********************" << endl; }

	//����ȯ
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
	
	//b + c������ �����ϸ� �̸� ���� �ӽ� ��ü�� ���������
	//a�� �����ϴ°��� �� �ӽ� ��ü�̴�

	a = b + c;
	cout << a << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << "******END*******" << endl;

	
	return 0;

}