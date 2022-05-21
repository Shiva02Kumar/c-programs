#include <iostream>
using namespace std;

int main()
{
    float firstNumber, secondNumber, product;

    // taking input
    cout << "Enter first numbers: ";
    cin >> firstNumber;
    cout << "Enter second numbers: ";
    cin >> secondNumber;

    // product of two numbers
    product = firstNumber * secondNumber;

    // displaying the output
    cout << "Product of two numbers is: " << product << endl;
    return 0;
}