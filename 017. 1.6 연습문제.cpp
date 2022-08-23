#include<iostream>
#include<tchar.h>

int _tmain() 
{

	int a_list[5] = { 30,50,10,40,20 };
	int temp = 0;
	
	for (auto &i : a_list) 
	{

		for (auto &j:a_list) 
		{

			if (i>j) 
			{

				temp = i;
				i = j;
				j = temp;

			}


		}

	}

	for (auto& n : a_list) 
	{
		std::cout << n << std::endl;
	}
	

}

