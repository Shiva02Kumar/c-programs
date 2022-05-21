#include <iostream>
using namespace std;

int main()
{
    float firstNumber, secondNumber, sub;
    
    // taking input
    cout << "Enter first numbers: ";
    cin >> firstNumber;
    cout << "Enter second numbers: ";
    cin >> secondNumber;

    // subtracting the two numbers
    sub = firstNumber - secondNumber;

    // displaying the output
    cout << "The subtraction of two numbers is: " << sub << endl;
    return 0;
}