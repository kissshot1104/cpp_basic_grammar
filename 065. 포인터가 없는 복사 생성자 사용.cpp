#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CMyData 
{

private:
	int m_nData = 0;

public:
	CMyData() { cout << "CMyData()" << endl; }

	int GetData(void) const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }


};


int _tmain() 
{

	//����Ʈ �����ڰ� ȣ��Ǵ� ���
	CMyData a;
	a.SetData(10);

	//���� �����ڰ� �����Ǵ� ���
	CMyData b(a);
	cout << b.GetData() << endl;


	return 0;


}