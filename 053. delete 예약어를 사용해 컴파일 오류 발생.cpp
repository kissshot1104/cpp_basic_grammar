#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{

private:
	int m_nData;

public:
	CMyData() : m_nData(0) {};
	~CMyData() {};
	int GetData(void) { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };


	void SetData(double dParam) = delete;

};

//����� �ڵ�

int _tmain() 
{

	CMyData a;

	//CMyData::SetData(int)�޼��尡 ȣ��ȴ�.
	a.SetData(10);

	cout << a.GetData() << endl;

	CMyData b;

	//CMyData::SetData(double)�޼��尡 ȣ��ȴ�.

	b.SetData(5.5);
	cout << b.GetData() << endl;

}