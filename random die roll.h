#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    //create a variable to hold the value of the die
    int die_value = 0;

    //assign the die to a random value
    die_value = rand();

    //limits the random number generator to the value of six
    //is one more than the value that we are looking for because it stops at six
    //instead of including six, now it will stop at 7
    die_value = die_value % 7;

    //Now output the result
    cout << "your die roll gave you a lucky number..." << die_value << "!!" << endl;

    if (die_value != 3)
    {
        cout << "Hmmmmm...doesnt look like a lucky number" << endl;
    }
    else
    {
        cout << "Nice!!!" << endl;
    }

    return 0;
}