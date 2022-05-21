#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    if (a == b)
    {
        cout << "Numbers are equal" << endl;
    }
    else if (a < b)
    {
        cout << "First number is smaller than second number" << endl;
    }
    else
    {
        cout << "First number is greater than second number" << endl;
    }
    return 0;
}