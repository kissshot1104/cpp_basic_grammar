#include<iostream>
#include<tchar.h>
#include<string>

using namespace std;


//제작자 코드

class CIntArray 
{
private:
	//배열 메모리
	int* m_pnData = nullptr;

	//배열 요소 개수
	int m_nSize = 0;
public:
	CIntArray(int nSize) {

		//전달된 개수만큼 int 자료를 담을 수 있는 메모리를 확보한다.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CIntArray() { delete[] m_pnData; }

	//상수형 참조인 경우의 배열 연산자
	int operator[](int nIndex) const 
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}
	
	//일반적인 배열 연산자
	int& operator[](int nIndex) 
	{
		cout << "operator[]" << endl;
		if (nIndex == 5) {
			int temp[5] = { 0, };

			for (int i = 0; i < 5; i++)
				temp[i] = m_pnData[i];
			delete[] m_pnData;
			m_pnData = new int[6];
			memset(m_pnData, 0, sizeof(int) * 6);
			for (int i = 0; i < 5; i++) 
			{
				m_pnData[i] = temp[i];
			}
		}
		return m_pnData[nIndex];
	}
};


//사용자 코드

void TestFunc(const CIntArray& arParam) 
{
	cout << "TestFunc()" << endl;

	//상수형 참조이므로 'operator[](int nIndex) const'를 호출한다
	
}

int _tmain() 
{
	CIntArray arr(5);

	
	int a = 0;
	for (int i = 0; i < 6; i++)
		arr[i] = i * 10;

	
	TestFunc(arr);
	arr[a];

	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	

	return 0;
}