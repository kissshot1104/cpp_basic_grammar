#include<iostream>
#include<memory>
#include<tchar.h>
using namespace std;


class CMyData 
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
};


int _tmain() 
{
	cout << "******begin*********" << endl;
	{
		//���� ������ ����� ��� ��ü�� �ڵ����� �Ҹ��Ѵ�.
		auto_ptr<CMyData>My_Auto_Ptr(new CMyData);
		//auto_ptr<CMyData>My_Auto_Ptr(new CMyData[3]);		�̷��� ������ ������
	}

	cout << "***********END*************" << endl;

	return 0;

}