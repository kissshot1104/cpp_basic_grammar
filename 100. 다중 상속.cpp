#include<iostream>
#include<tchar.h>
using namespace std;

class CMyImage 
{
protected:
	int m_nHeight;
	int m_nWidth;

public:
	CMyImage(int nHeight, int nWidth)
		:m_nHeight(nHeight), m_nWidth(nWidth) 
	{
		cout << "CMyImage(int, int)" << endl;
	}

	int GetHeight() const { return m_nHeight; }
	int GetWidth() const { return m_nWidth; }

};

class CMyShape 
{
protected:
	int m_nType;

public:
	CMyShape(int nType)
		: m_nType(nType) 
	{
		cout << "CMyShape(int)" << endl;
	}

	int GetType() const { return m_nType; }
};


//두 클래스를 모두 상속받는다.
class CMyPicture : public CMyImage, public CMyShape 
{
public:
	CMyPicture() : CMyImage(200, 120), CMyShape(1) 
	{
		cout << "CMyPicture()" << endl;
	}
};

int _tmain() 
{

	CMyPicture a;
	cout << "Width : " << a.GetWidth() << endl;
	cout << "Height : " << a.GetHeight() << endl;
	cout << "Type : " << a.GetType() << endl;

	return 0;

}