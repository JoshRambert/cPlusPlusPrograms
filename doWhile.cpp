#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int in_value = -1;
    cout << "Please enter an integer from 0-10: ";
    //insist on values n the range of 0 - 10

    do
        cin >> in_value;
    while (in_value < 0 || in_value > 10);
    {
        //in_value at this point is guaranteed to be within range
        cout << "Legal value entered was " << in_value << endl;
    }
    return 0;
}