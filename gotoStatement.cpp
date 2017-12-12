#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //compute some products
    int op1 = 2;
    while (op1 < 100)
    {
        int op2 = 2;
        while (op2 < 100)
        {
            if (op1 * op2 == 3731)
            {
                goto end;
            }
            cout << "Product is " << (op1 * op2) << endl;
            op2++;
        }
        op1++;
    }
    end		//notice that it out of the nested while loops
    cout << "The End" << endl;
    return 0;
}