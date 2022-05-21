#include <iostream>
using namespace std;

int main()
{
    int start, end, step;
    int celsius;
    cout << "Enter Start Point: ";
    cin >> start;
    cout << "Enter End Point: ";
    cin >> end;
    cout<<"Enter the Step Size: ";
    cin >> step;

    cout << "Fahrenheit" << "\t" << "Celsius" << endl;
    while (start <= end)
    {
        celsius = ((start - 32) * 5 / 9);
        cout << start << "\t\t" << celsius << endl;
        start = start + step;
    }
    // start = start + step;
    return 0;
}