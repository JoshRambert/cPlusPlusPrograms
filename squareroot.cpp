#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double input;
	// Get value from the user
	cout << "Enter number: ";
	cin >> input;
	double diff;
	// Compute a provisional square root
	double root = 1.0;
	do { // Loop until the provisional root
		// is close enough to the actual root
		root = (root + input / root) / 2.0;
		cout << "root is " << root << endl;
		// How bad is the approximation?
		diff = root * root - input;
	} while (diff > 0.0001 || diff < -0.0001);
	// Report approximate square root
	cout << "Square root of " << input << " = " << root << endl;

	system("pause");
	return 0;
}

