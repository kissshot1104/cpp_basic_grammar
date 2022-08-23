#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData
{
private:

	int* m_pnData = nullptr;
public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }

	operator int() { return *m_pnData; }

	CMyData& operator=(const CMyData& rhs)
	{
		//���� ����Ű�� �޸𸮸� �����ϰ�
		delete m_pnData;

		//���� �Ҵ��� �޸𸮿� ���� �����Ѵ�.
		m_pnData = new int(*rhs.m_pnData);
		
		return *this;
	}

	CMyData& operator+=(const CMyData& rhs) 
	{
		//���� �� ó��
		int* pnNewData = new int(*m_pnData);

		//������ �� ó��
		*pnNewData += *rhs.m_pnData;

		//���� �����͸� �����ϰ� �� �޸𸮷� ��ü
		delete m_pnData;
		m_pnData = pnNewData;

		return *this;

	}
};

//������ �ڵ�
int _tmain()
{

	CMyData a(0), b(5),c(7);

	a = b;
	cout << a << endl;
	c += b;
	cout << c << endl;
	return 0;

}