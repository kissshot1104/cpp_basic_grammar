#include<iostream>
#include<string>
#include<tchar.h>

using namespace std;

class CMyData 
{

private:

	int m_nData=0;
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() {};

	// ���� ������ ���� �� ����
	CMyData(const CMyData& rhs)
	// : m_nData(rhs.m_nData)
	{

		this->m_nData = rhs.m_nData;
		cout << "CMyData(const CMyData &)" << endl;

	}

	int GetData(void) const {
		return m_nData;
	};

	void SetData(int nParam) { m_nData = nParam; };

};


int _tmain() 
{

	CMyData a;
	a.SetData(10);

	//���� �����ڰ� ȣ��Ǵ� ���
	CMyData b(a);
	a.SetData(20);
	cout << b.GetData() << endl;

	return 0;

} 


