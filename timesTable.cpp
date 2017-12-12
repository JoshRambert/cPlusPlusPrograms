#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //the number of rows and columns in the table
    int size;
    cout << "Please enter the table size ";
    cin >> size;

    //print a size x size multiplication table
    int row = 1;

    while (row <= size)     //table has the size of the rows
    {
        int column = 1;     //reset the column for each row
        while (column <= size)      //table has size column
        {
            int product = row*column;       //compute the product
            cout << setw(5) << product << " ";     //display the product
            column++;
        }
        cout << endl;       //moves the cursor to the next row
        row++;      //next row

    }
    return 0;
}