#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int input, sum = 0;
    cout << "Enter numbers to sum, negative numbers ends list:";
    cin >> input;       //user input for th integers

    while (true)        //creates a loop that sums the two integers but breaks if a negative number is used
    {
        cin >> input;
        if(input < 0)
        {
            break;      //exits the loop immediately
        }
        sum += input;
    }
    //display the sum
    cout << "Sum " << sum << endl;
    return 0;
}