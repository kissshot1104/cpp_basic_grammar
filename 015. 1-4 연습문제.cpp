#include<iostream>
#include<string>
#include<tchar.h>

void Swap(int& x, int& y) 
{

	int temp = x;

	x = y;

	y = temp;

}

int _tmain() 
{

	int x = 3;
	int y = 4;

	Swap(x, y);


	std::cout << "x : " << x << std::endl << "y : " << y << std::endl;
	return 0;
}


