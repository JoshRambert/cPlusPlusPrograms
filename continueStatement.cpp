#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // example of a continue loop statement
    int input, sum = 0;
    bool done = false;
    while (!done)
    {
        cout << "Enter positive integers (999) quits: ";
        cin >> input;
        if (input < 0)
        {
            cout << "Negative value " << input << " ignored" << endl;
            continue;       //skip the rest of body for this iteration
        }
        if (input != 999)
        {
            cout << "Tallying " << input << endl;
            sum += input;
        }
        else
        {
            done = (input == 999);
        }
        cout << "sum = " << sum << endl;
    }
    return 0;
}