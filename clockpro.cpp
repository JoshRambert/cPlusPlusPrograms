// C++ Lab 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
		char letter;
		cout << "Enter a character: ";
		clock_t seconds = clock(); // Record starting time
		cin >> letter;
		clock_t other = clock(); // Record ending time
		cout << static_cast<double>(other - seconds) / CLOCKS_PER_SEC
			<< " seconds" << endl;

		system("pause");
	return 0;
}