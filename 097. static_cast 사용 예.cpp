#include<iostream>
#include<tchar.h>
using namespace std;


class CMyData 
{
private:
	int m_nData = 0;
public:
	CMyData() {}
	virtual ~CMyData() {}
	void SetData(int nParam) { m_nData = nParam; }
	int GetData() const { return m_nData; }

};


class CMyDataEx : public CMyData 
{
private:
	
public:
	
	void SetData(int nParam) 
	{
		if (nParam > 10)
			nParam = 10;

		CMyData::SetData(nParam);
	}
	
	void PrintData() 
	{
		cout << "PrintData(): " << GetData() << endl;
		
	}
};


int _tmain() 
{
	//�Ļ� ������ ��ü�� �⺻ ������ �������մϴ�.
	CMyData* pData = new CMyDataEx;
	CMyDataEx* pNewData = NULL;


	//CMyData::SetData() �Լ��� ȣ���մϴ�.
	//���� 10�� �Ѵ��� �˻����� �ʽ��ϴ�.
	pData->SetData(15);

	//�⺻ ���Ŀ� ���� �������̳� ����Ű�� ����� �Ļ� �����Դϴ�.
	//�� ����� ��Ȯ�ϹǷ� �Ļ� ���Ŀ� ���� �����ͷ� ����ȯ�� �õ��մϴ�.
	pNewData = static_cast<CMyDataEx*>(pData);
	pNewData->SetData(14);
	pNewData->PrintData();
	delete pData;

	return 0;
}