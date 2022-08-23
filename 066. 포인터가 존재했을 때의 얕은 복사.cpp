#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
	
private:
	//������ ��� ������
	int* m_pnData = nullptr;
public:

	CMyData(int nParam) 
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}
	~CMyData() { delete m_pnData; }//�̹� �Ҵ������� �ּҸ� �� �Ҵ� �����Ϸ��� �Ͽ� ������ ����. 
	//�׷��Ƿ� �ؿ� ���� ������ �ڵ带 �߰�������

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData -> m_pnData" << endl;

		this->CMyData::m_pnData = new int;

		*this->CMyData::m_pnData = *rhs.m_pnData;

	}
	/*
		���� ���縦  ������ ��������ڰ� ���⶧���� �����Ϸ��� �ڵ����� ��������ڸ� ������ش�
		CMyData(const CMyData &rhs)
		{
			this->CMyData::m_pnData = rhs.m_pnData;
		}

	*/

	
	int GetData() 
	{
		if (m_pnData != NULL) 
		{
			return *m_pnData;
		}

		return 0;
	}
};


int _tmain() 
{

	CMyData a(10);
	CMyData b(a);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

}
