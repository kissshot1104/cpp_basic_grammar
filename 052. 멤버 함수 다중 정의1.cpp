#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData {

private:
	int m_nData;

public:
	CMyData() :m_nData(0) {}
	int GetData(void) const { return m_nData; }

	void TestFunc(int nParam) { m_nData = nParam; }
	//�Ű� ������ double �ڷ����� ���� ���� �����ߴ�.
	void SetData(double dParam) { m_nData = 0; }

};

int _tmain() 
{

	CMyData a;

	//CMyData::SetData(int) �޼��尡 ȣ��ȴ�.
	a.SetData(10);
	cout << a.GetData() << endl;

	CMyData b;
	
	//CMyData::SetData(double)�޼��尡 ȣ��ȴ�.
	b.SetData(5.5);
	cout << b.GetData() << endl;

	return 0;

}