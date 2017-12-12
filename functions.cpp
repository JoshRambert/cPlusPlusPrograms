// Lab 7.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream> // for cin and cout
using namespace std;

//define getInteger
int getInteger()
{
	int value;
	cout << "Enter an integer" << endl;
	cin >> value;
	return value;
}
//define adder
int adder(int number1, int number2)
{
	int sum;
	sum = number1 + number2;
	return sum;
}
//define displaySum
void displaySum(int sum)
{
	cout << "The sum of your numbers is " << sum << endl;
	return;
}
int _tmain(int argc, _TCHAR* argv[])
{
	// define variables
	int result;
	int num1 = getInteger();
	int num2 = getInteger();

	result = adder(num1, num2);

	displaySum(result);

	system("pause");
	return 0;
}
