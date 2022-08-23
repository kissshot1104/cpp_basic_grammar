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
		//속한 범위를 벗어나면 대상 객체는 자동으로 소멸한다.
		auto_ptr<CMyData>My_Auto_Ptr(new CMyData);
		//auto_ptr<CMyData>My_Auto_Ptr(new CMyData[3]);		이러면 논리적인 오류남
	}

	cout << "***********END*************" << endl;

	return 0;

}