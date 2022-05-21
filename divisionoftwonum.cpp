#include <iostream>
using namespace std;

int main()
{
    float firstNumber, secondNumber, division;

    // taking input
    cout << "Enter first numbers: ";
    cin >> firstNumber;
    cout << "Enter second numbers: ";
    cin >> secondNumber;

    // division the two numbers
    division = firstNumber / secondNumber;

    // displaying the output
    cout << "Division of two numbers is: " << division << endl;
    return 0;
}