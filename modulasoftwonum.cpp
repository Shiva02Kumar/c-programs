#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, remainder;

    // taking input
    cout << "Enter first numbers: ";
    cin >> firstNumber;
    cout << "Enter second numbers: ";
    cin >> secondNumber;

    // remainder of two numbers
    //  Here,one important point to note that modulus operator works only on two integer operands
    remainder = firstNumber % secondNumber;

    // displaying the output
    cout << "Modulus of two numbers is: " << remainder << endl;
    return 0;
}