#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int n = c;

    if (n >= 'a' && n <= 'z')
    {
        cout << "it is lower case" << endl;
    }
    else if (n >= 'A' && n <= 'Z')
    {
        cout << "It is upper case" << endl;
    }
    else if (n >= '0' && n <= '9')
    {
        cout << "It is number" << endl;
    }
}