#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    int ans[32] = {0};
    int i = 31;
    while (n != 0)
    {
        ans[i] = n % 2;
        n = n/2;
        i--;
    }
    cout << "Bin: ";
    for (int i = 0; i < 32; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}