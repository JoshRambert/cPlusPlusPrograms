#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char first = 'A';       //The first letter varies from A to C
    while (first <= 'C')
    {
        char second = 'A';
        while (second <= 'C')       //The second varies from A to C
        {
            if (second != first)    //No duplicate letters
            {
                char third = 'A';
                while (third <= 'C')    //the third varies from A to C
                {
                    // Dont duplicate any letters
                    if (third != first && third != second)
                    {
                        cout << first << second << third << endl;
                    }
					third++
                }
                
            }
            second++;
        }
		first++;
    }
    return 0;
}