#include<iostream>
#include<tchar.h>
using namespace std;

class CMyObject
{
public:
	CMyObject() { cout << "CMyObject()" << endl; };
	virtual ~CMyObject() {}


};

class CMyImage : public CMyObject 
{
public:
	CMyImage() { cout << "CMyImage(int, int)" << endl; }


};


class CMyShape : public CMyObject 
{
public:
	CMyShape() { cout << "CMyShape(int)" << endl; }

};

class CMyPicture : public CMyImage, public CMyShape 
{

public:
	CMyPicture() { cout << "CMyPicture()" << endl; }

};

int _tmain() 
{
	CMyPicture a;
}

/*#include<iostream>
#include<tchar.h>
using namespace std;

class CMyObject
{
public:
	CMyObject() { cout << "CMyObject()" << endl; };
	virtual ~CMyObject() {}


};

class CMyImage : public virtual CMyObject					<-
{
public:
	CMyImage() { cout << "CMyImage(int, int)" << endl; }


};


class CMyShape : public virtual CMyObject					<-  virtual을 붙이면 된다
{
public:
	CMyShape() { cout << "CMyShape(int)" << endl; }

};

class CMyPicture : public CMyImage, public CMyShape 
{

public:
	CMyPicture() { cout << "CMyPicture()" << endl; }

};

int _tmain() 
{
	CMyPicture a;
}*/