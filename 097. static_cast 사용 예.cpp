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
	//파생 형식의 객체를 기본 형식을 포인팅합니다.
	CMyData* pData = new CMyDataEx;
	CMyDataEx* pNewData = NULL;


	//CMyData::SetData() 함수를 호출합니다.
	//따라서 10이 넘는지 검사하지 않습니다.
	pData->SetData(15);

	//기본 형식에 대한 포인터이나 가리키는 대상은 파생 형식입니다.
	//이 사실이 명확하므로 파생 형식에 대한 포인터로 형변환을 시도합니다.
	pNewData = static_cast<CMyDataEx*>(pData);
	pNewData->SetData(14);
	pNewData->PrintData();
	delete pData;

	return 0;
}