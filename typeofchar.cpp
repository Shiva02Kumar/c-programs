#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter Character: ";
    cin >> c;
    if (isupper(c))
    {
        cout << 1 << endl;
    }
    else if (islower(c))
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}