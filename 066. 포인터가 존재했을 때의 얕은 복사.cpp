#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;

class CMyData 
{
	
private:
	//포인터 멤버 데이터
	int* m_pnData = nullptr;
public:

	CMyData(int nParam) 
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}
	~CMyData() { delete m_pnData; }//이미 할당해제된 주소를 또 할당 해제하려고 하여 오류가 난다. 
	//그러므로 밑에 복사 생성자 코드를 추가해주자

	CMyData(const CMyData& rhs)
	{
		cout << "CMyData -> m_pnData" << endl;

		this->CMyData::m_pnData = new int;

		*this->CMyData::m_pnData = *rhs.m_pnData;

	}
	/*
		깊은 복사를  수행할 복사생성자가 없기때문에 컴파일러가 자동으로 복사생성자를 만들어준다
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
