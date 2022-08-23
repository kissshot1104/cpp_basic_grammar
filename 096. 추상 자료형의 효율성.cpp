#include<tchar.h>
#include<iostream>
#define PAY 1000
using namespace std;
class CHuman 
{

protected:
	int money = 0;
public:
	CHuman() {}
	virtual ~CHuman() {}

	virtual void CalcMoney() = 0;
	
	int PrintMoney() { return money; }
	void GetMoney(CHuman* human)
	{
		cout << human->PrintMoney() << endl;
	}
};

class CKid : public CHuman
{
public:
	CKid() {}
	virtual ~CKid() {}

	void CalcMoney()
	{
		money = PAY * 0 / 100;
	}

};


class CChild : public CHuman
{
public:
	CChild() {}
	virtual ~CChild() {}
	void CalcMoney()
	{
		money = PAY * 50 / 100;
	}


};

class CStudent : public CHuman
{
public:
	CStudent() {}
	virtual ~CStudent() {}
	void CalcMoney()
	{
		money = PAY * 75 / 100;
	}

};

class CAdult : public CHuman
{
public:
	CAdult() {}
	virtual ~CAdult() {}
	void CalcMoney()
	{
		money = PAY * 100 / 100;
	}

};



int _tmain() 
{

	CHuman* human[3] = { 0, };
	int age = 0;
	for (auto& n : human) 
	{

		cin >> age;

		if (age < 5)
			n = new CKid;
		else if (age < 10)
			n = new CChild;
		else if (age < 15)
			n = new CStudent;
		else
			n = new CAdult;
		

		n->CalcMoney();

	}
	
	
	for (auto& n : human)
		n->GetMoney(n);



}