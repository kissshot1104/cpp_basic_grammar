#include<iostream>
#include<tchar.h>
using namespace std;


//������ �ڵ�
class CMyData 
{
private:
	char* m_pszData;
public:
	CMyData() { m_pszData = new char[32]; }

	virtual ~CMyData() 
	{
		cout << "~CMyData()" << endl;
		delete m_pszData;
	}
};

class CMyDataEx : public CMyData 
{
private:
	int *m_pnData = nullptr;
public:
	CMyDataEx() { m_pnData = new int; }
	~CMyDataEx() {
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}
};

class CMyDataExEx : public CMyDataEx 
{
private:
	int* m_pnData = nullptr;
public:
	CMyDataExEx() { m_pnData = new int; }
	~CMyDataExEx() {
		cout << "~CMyDataExEx()" << endl;
		delete m_pnData;
	}
};

int _tmain() 
{
	CMyData* pData = new CMyDataExEx;

	//���� ���Ŀ� �´� �Ҹ��ڰ� ȣ��ȴ�.
	delete pData;

	return 0;
}