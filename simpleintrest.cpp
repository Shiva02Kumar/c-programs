#include <iostream>
using namespace std;

int main()
{
    // We can change values here for different inputs
    float P, R, T;
    cout << "Enter the principle amount: ";
    cin >> P;
    cout << "Enter the time period : ";
    cin >> T;
    cout << "Enter the rate of interest: ";
    cin >> R;

    /* Calculate simple interest */
    float SI = (P * T * R) / 100;

    /* Print the resultant value of SI */
    cout << "Simple Interest = " << SI;
    
    return 0;
}