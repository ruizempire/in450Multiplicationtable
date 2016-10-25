// INFO450multiply.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void)
{
	cout << "Multiplication table" << endl;
	cout << "1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;

	for (int x = 1; x <= 10; x++)
	{
		cout << x << "|";
		for (int y = 1; y < 11; y++)
		{
			cout << x*y << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
;