#include<iostream>
#include<tchar.h>
#include<string>

using namespace std;


//������ �ڵ�

class CIntArray 
{
private:
	//�迭 �޸�
	int* m_pnData = nullptr;

	//�迭 ��� ����
	int m_nSize = 0;
public:
	CIntArray(int nSize) {

		//���޵� ������ŭ int �ڷḦ ���� �� �ִ� �޸𸮸� Ȯ���Ѵ�.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CIntArray() { delete[] m_pnData; }

	//����� ������ ����� �迭 ������
	int operator[](int nIndex) const 
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}
	
	//�Ϲ����� �迭 ������
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


//����� �ڵ�

void TestFunc(const CIntArray& arParam) 
{
	cout << "TestFunc()" << endl;

	//����� �����̹Ƿ� 'operator[](int nIndex) const'�� ȣ���Ѵ�
	
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