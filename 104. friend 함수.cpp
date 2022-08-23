#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
private:
	int m_nData = 0;
public:
	CMyData(int nParam) : m_nData(nParam) {}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }


	//friend �Լ��� �����Ѵ�.
	friend void PrintData(const CMyData&);


};


void PrintData(const CMyData& rData) 
{
	//������ �Լ��̹Ƿ� ���� ���� �������� ������ ���� �ʰ�
	//private ����� ���� �����Ѵ�.
	cout << "PrintData() : " << rData.m_nData << endl;

}


int _tmain() 
{
	CMyData a(5);
	PrintData(a);

	return 0;
}