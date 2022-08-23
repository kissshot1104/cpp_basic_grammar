#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData 
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	CMyData(int nParam) { cout << "CMyData(int)" << endl; }
	CMyData(double dParam) { cout << "CMyData(double)" << endl; }
};


class CMyDataEx : public CMyData 
{
public:
	using CMyData::CMyData;
	CMyDataEx() { cout << "CMyDataEx()" << endl; }

	//�⺻ Ŭ������ �� ���� ������ �߿��� int ������ ���� �����ڸ� �����ߴ�.
	CMyDataEx(int nParam) : CMyData(nParam) 
	{
		cout << "CMyDatEx(int)" << endl;
	}

	//�⺻ Ŭ������ ����Ʈ �����ڸ� �����ߴ�.
	CMyDataEx(double dParam) : CMyData()
	{
		cout << "CMyDataEx(double)" << endl;
	}

};


int _tmain() 
{
	CMyDataEx a;
	cout << "*************************" << endl;
	CMyDataEx b(5);
	cout << "************************" << endl;
	CMyDataEx c(3.3);


	return 0;
}