#include <iostream>
using namespace std;

int main()
{
    int i, number, Sum = 0;
    cout << "Enter the value of N: ";
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        //Check whether remainder is 0 or not
        if (i % 2 == 0)
        {
            Sum = Sum + i;
        }
    }
    cout << "The Sum of All Even Numbers are = " << Sum;
    return 0;
}