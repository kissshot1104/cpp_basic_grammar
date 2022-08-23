#include<iostream>
#include<tchar.h>
using namespace std;


//���ø� �Ű������� �Լ�ó�� �����Ѵ�.
template<typename T,int nSize>
//template<typename T, int nSize = 3>     ����Ʈ�ε� ��������
class CMyArray 
{
private:
	T* m_pData = nullptr;
public:
	CMyArray() { m_pData = new T[nSize]; }
	~CMyArray() { delete[] m_pData; }

	//�迭 ������
	T& operator[](int nIndex) 
	{
		if (nIndex < 0 || nIndex >= nSize) 
		{
			cout << "ERROR : �迭�� ��踦 ��� �����Դϴ�." << endl;
			exit(1);
		}

		return m_pData[nIndex];
	}
	

	//���ȭ�� �迭 ������
	T& operator[](int nIndex) const { return operator[](nIndex); };

	//�迭 ����� ������ ��ȯ
	int GetSize() { return nSize; };


};



int _tmain() 
{
	CMyArray<int,3>arr;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	


	for (int i = 0; i < 4; ++i)
		cout << arr[i] << endl;


	return 0;
}
	