#include <iostream>
using namespace std;

int main()
{
    float perimeter, length, breadth;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;
    perimeter = 2 * (length + breadth);
    cout << "Perimeter of Rectangle: " << perimeter << endl;
    return 0;
}