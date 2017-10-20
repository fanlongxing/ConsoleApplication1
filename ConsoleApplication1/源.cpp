#include "stdafx.h"
#include <iostream>
//declare the functions defined in other cpp

int helloworld();
int fibonacci();

//Write the main function here and call the appropriate function from here
using namespace std;
int main()
{
	int i;
	cin >> i;
	switch (i)
	{







	case 1: helloworld(); break;
	case 2: fibonacci();  break;
		// etc etc..
	default: break;
	}
	return 0;
}