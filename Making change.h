#include <iostream>

using namespace std;

// Making Change Program
int main()
{
    // Define variables and constants that will determine how many quarters and what is left
	const int QTR = 25;
	int num_QTRS = 0;


	// Ask the user to enter a value to convert to quarters dimes nickels and pennies
	int value = 0;
	cout << "Enter a value between 1 and 99" << endl;
	cin >> value;

	//determine how many quarters go into the value
	num_QTRS = value / QTR;

	//see how much value is left to see the remainder after dividing by QTR
	value = value % QTR;

	//output the current status
	cout << "After using " << num_QTRS << " quarters, there is " << value << " Left." << endl;

    //Create a constant for dimes nickels and pennies
	const int DIM = 10;
	int num_DIM = 0;

	//remember to reset the int value to 0
    value = 0;

	cout <<"Enter another number between 1 and 99" << endl;
	cin >> value;

	//Determine  how many dimes go into the value
	num_DIM = value / DIM;

	//See how much value is left to see the remainder after dividing by QTR
	value = value % DIM;

	//output the current status
	cout << "After using " << num_DIM << " dimes, there is " << value << "left." << endl;

	//Create One for nickels
	const int NIC = 5;
	int num_NIC = 0;

	//Reset the value int
	value = 0;

	//Ask the user to enter yet another number
	cout << "Enter yet ANOTHER number between 1 and 99" << endl;
	cin >> value;

	//Determine how many times the nickels are used within the number
	num_NIC = value / NIC;

	//See how much of the value is left after using all of the nickels
	value = value % NIC;

	//Output the current status
	cout << "After using " << num_NIC << " nickels, there is " << value << " left." << endl;

	//Create one for pennies
	const int PEN = 1;
	int num_PEN = 0;

	//Reset the value int
	value = 0;

	//Ask the user to type a number between 1 and 99
	cout << "One final time, enter a number between 1 and 99" << endl;
	cin >> value;

	//determine the number of pennies that will be used
	num_PEN = value / PEN;

	//See how much of the value is left after the pennies are used
	value = value % PEN;

	//output the current status
	cout << "After using " << num_PEN << " pennies, there is " << value << " left." << endl;

	return 0;
}
