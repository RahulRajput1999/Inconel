#include <iostream>
using namespace std;

int main()
{
    int p = 0;
    cout << "Enter the number:";
    cin >> p;
    bool isPrime = true;
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << p << " is a prime" << endl;
    }
    else
    {
        cout << p << " is not a prime" << endl;
    }
}