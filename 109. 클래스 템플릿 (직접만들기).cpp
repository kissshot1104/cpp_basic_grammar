#include<iostream>
#include<string>
#include<tchar.h>
using namespace std;
template <typename T>
class CData
{
private:
	T* m_pData = nullptr;
	int m_Index_size = 0;

public:
	CData(int nSize): m_Index_size(nSize)
	{
		m_pData = new T[nSize];
		memset(m_pData, 0, sizeof(T) * nSize);
	}
	~CData() {}

	T& operator[](const int nIndex) 
	{
		
		if (nIndex > this->m_Index_size) 
		{
			T* pData = new T[m_Index_size];
			for (int i = 0; i < this->m_Index_size; i++)
				pData[i] = this->m_pData[i];
			

			delete[] this->m_pData;
			this->m_pData = new T[nIndex+1];
			memset(this->m_pData, 0, sizeof(T) * nIndex+1);
			

			for (int i = 0; i < this->m_Index_size; i++)
				this->m_pData[i] = pData[i];

			this->m_Index_size = nIndex+1;

			delete[] pData;
		}

		return this->m_pData[nIndex];
		
	}



	T& operator[](const int nIndex) const
	{
		if (nIndex > this->m_Index_size+1)
			return;

		return this->m_pData[nIndex];
	}

	CData& operator=(const CData& rhs) 
	{
		if (rhs.m_Index_size > this->m_Index_size)
		{
			if (this->m_pData != nullptr)
				delete this->m_pData;

			this->m_pData = new T[rhs.m_Index_size+1];
			memset(this->m_pData, 0, rhs.m_Index_size + 1);
			this->m_Index_size = rhs.m_Index_size + 1;
		}
		
		for (int i = 0; i < this->m_Index_size; i++)
			this->m_pData[i] = rhs.m_pData[i];

		
		return *this;
	}
	

};

int _tmain() 
{

	CData<int> a(5),b(3);
	for (int i = 0; i < 5; i++)
		a[i] = i * 10;
	
	for(int i=0;i<5;i++)
		cout << a[i] << endl;

	b = a;

	for (int i = 0; i < 5; i++)
		cout << b[i] << endl;

}
