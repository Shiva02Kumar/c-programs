#include <iostream>
using namespace std;

int main()
{
    float area, length, breadth;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;
    area = length * breadth;
    cout << "Area of Rectangle: " << area << endl;
    return 0;
}