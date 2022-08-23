#include<iostream>
#include<tchar.h>
using namespace std;

//������ - �ʱ� ������
class CMyData 
{
private://������ ���� �Ұ���
	int m_nData = 0;
protected://�Ļ� Ŭ������ ���� ����
	void PrintData() const{ cout << "CMyData::PrintData()" << endl; }
public:// ������ ���� ����
	

	CMyData() { cout << "CMyData()" << endl; }
	int GetData() const{ return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
	~CMyData() { cout << "~CMyData" << endl; };
};

class CMyDataEx : public CMyData 
{
public:
	CMyDataEx() { cout << "CMyDataEx()" << endl; }
	~CMyDataEx() { cout << "~CMyDataEx" << endl; };
	void TestFunc() 
	{
		PrintData();
		SetData(5);
		cout << CMyData::GetData() << endl;

	}
	
};

//�����
int _tmain() 
{
	CMyDataEx data;


	//�⺻ Ŭ����(CMyData)����� ����
	data.SetData(10);
	cout << data.GetData() << endl;

	//�Ļ� Ŭ����(CMyDataEx)����� ����
	data.TestFunc();

	return 0;
}