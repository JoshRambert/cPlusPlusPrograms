#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int max_value;
    cout << "Display primes up to what value? ";
    cin >> max_value;
    int value = 2;      //smallest prime number

    while (value <= max_value)
    {
        //see if value is prime
        bool is_prime = true;       //provisionally value is prime
        // try all possible factors from to 2 to value - 1
        int trial_factor = 2;
        while (trial_factor < value)
        {
            if (value % trial_factor == 0)
            {
                is_prime = false;       //means that it found a factor
                break; // no need to continue
            }
            trial_factor++;
        }
        if (is_prime)
        {
            cout << value << " ";   //display the prime number
            value++;
        }
        cout << endl;
    }

    return 0;
}