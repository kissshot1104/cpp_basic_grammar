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
		//본래 가리키던 메모리를 삭제하고
		delete m_pnData;

		//새로 할당한 메모리에 값을 저장한다.
		m_pnData = new int(*rhs.m_pnData);
	}
};

//제작자 코드
int _tmain() 
{

	CMyData a(0), b(5);

	a = a;
	cout << a << endl;

	return 0;

}