#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
private:
	int m_nData = 0;
public:
	CMyData(int nParam) : m_nData(nParam) { }
	
	//�� ��ȯ
	operator int() { return m_nData; };

	//���� ���� ������
	int operator++() 
	{
		cout << "operator++()" << endl;

		return ++m_nData;
	}

	//���� ���� ������
	int operator++(int) 
	{
		cout << "operator++(int)" << endl;
		int nData = m_nData;
		m_nData++;

		return nData;
	
	}
	

};


int _tmain() 
{

	CMyData a(10), b(20), c(30);

	//���� ���� �����ڸ� ȣ���Ѵ�.

	cout << ++a << endl;

	//���� ���� �����ڸ� ȣ���Ѵ�.
	cout << a++ << endl;

	cout << a << endl;

	return 0;

}