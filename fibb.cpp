#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the value of n:";
    cin >> n;

    int a = 0, b = 1;
    cout << a << endl;
    cout << b << endl;
    for (int i = 0; i < n; i++)
    {
        int nn = a + b;
        cout << nn << endl;
        a = b;
        b = nn;
    }
}