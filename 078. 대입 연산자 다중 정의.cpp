#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
private:

	int *m_pnData = nullptr;
public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }

	operator int() { return *m_pnData; }

	void operator=(const CMyData& rhs) 
	{
		//���� ����Ű�� �޸𸮸� �����ϰ�
		delete m_pnData;

		//���� �Ҵ��� �޸𸮿� ���� �����Ѵ�.
		m_pnData = new int(*rhs.m_pnData);
	}
};

//������ �ڵ�
int _tmain() 
{

	CMyData a(0), b(5);

	a = a;
	cout << a << endl;

	return 0;

}