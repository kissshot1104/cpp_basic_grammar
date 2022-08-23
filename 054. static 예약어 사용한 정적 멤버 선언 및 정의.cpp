#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;


class CTest 
{
private:

	int m_nData;
	static int m_nCount;

public:

	CTest(int nParam) : m_nData(nParam) { m_nCount++; };	//3. CTest의 생성자 3번 실행으로 인해 m_nCount
	int GetData() { return m_nData; };
	void ResetCount() { m_nCount = 0; }

	//정적 메서드 선언 및 정의
	static int GetCount()
	{

		return m_nCount;

	}

};


int CTest::m_nCount = 1;//1. 처음 m_ncount를 1로 초기화

int _tmain() 
{

	CTest a(5), b(10),c(15);		//2. CTest의 생성자 3번 실행
	
	//정적 멤버에 접근

	cout << a.GetCount() << endl;
	b.ResetCount();

	//정적 멤버에 접근, 인스턴스 없이도 접근 가능
	cout << CTest::GetCount() << endl;
	cout << c.GetCount() << endl;
	

	return 0;

}

