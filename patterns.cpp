#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    int n = 0;
    cin >> n;
    /*
    // -----------------
    //        123
    //        123
    //        123
    // -----------------

    while (i++<n)
    {
        int j = 1;
        while (j++<=n)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    //-----------------
    //       321
    //       321
    //       321
    //-----------------
    while (i++ < n)
    {
        int j = n;
        while (j-- > 0)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    //-----------------
    //        123
    //        456
    //        789
    //-----------------
    int count = 1;
    while (i++ < n)
    {
        int j = 0;
        while (j++ < n)
        {
            cout << count++ << ' ';
        }
        cout << endl;
    }
   // -----------------
   // *
   // **
   // ***
   // -----------------
    while (i++<n)
    {
        int j = 0;
        while(j++<i)
        {
            cout << '*';
        }
        cout << endl;
    }

   // ---------------
    //    1
    //    2 3
    //    4 5 6
    //    7 8 9 10
   // ---------------
    int count = 1;
    while (i++<n)
    {
        int j = 0;
        while(j++<i)
        {
            cout << count++ <<  ' ';
        }
        cout << endl;
    }
    // ---------------
    //    1
    //    2 3
    //    3 4 5
    //    4 5 6 7
    // ---------------
    while (i++ < n)
    {
        int j = 0;
        while(j++<i)
        {
            cout << i+j-1 << ' ';
        }
        cout << endl;
    }
    // ---------------
    //    1
    //    2 1
    //    3 2 1
    //    4 3 2 1
    // ---------------

    while (i++ < n)
    {
        int j = 0;
        while (j++ < i)
        {
            cout << i - j + 1 << ' ';
        }
        cout << endl;
    }
   // ---------------
    //    AAA
    //    BBB
    //    CCC
    // ---------------
    while (i < n)
    {
        int j = 0;
        while (j++ < n)
        {
            char c = 'A' + i;
            cout << c << ' ';
        }
        cout << endl;
        i++;
    }
    // ---------------
    //    ABC
    //    ABC
    //    ABC
    // ---------------
    while (i < n)
    {
        int j = 0;
        while (j++ < n)
        {
            char c = 'A' + j - 1;
            cout << c << ' ';
        }
        cout << endl;
        i++;
    }

    // ---------------
    //    ABC
    //    DEF
    //    GHI
    // ---------------
    int count = 1;
    while (i < n)
    {
        int j = 0;
        while (j++ < n)
        {
            char c = 'A' + count++ - 1;
            cout << c << ' ';
        }
        cout << endl;
        i++;
    }

    // ---------------
    //    ABC
    //    BCD
    //    CDE
    // ---------------
    while (i < n)
    {
        int j = 0;
        while (j++ < n)
        {
            char c = 'A' + i + j - 1;
            cout << c << ' ';
        }
        cout << endl;
        i++;
    }
    // ---------------
    //    A
    //    BB
    //    CCC
    // ---------------
    while(i++ < n)
    {
        int j = 0;
        while(j++ < i)
        {
            char c = 'A' + i - 1;
            cout << c << ' ';
        }
        cout << endl;
    }
    // ---------------
    //       *
    //      **
    //     ***
    // ---------------

    while (i++ < n)
    {
        int j = n - i;
        while (j-- > 0)
        {
            cout << ' ';
        }
        while (j++ < i - 1)
        {
            cout << '*';
        }
        cout << endl;
    }

    // ---------------
    //     ***
    //     **
    //     *
    // ---------------

    while (i++ < n)
    {
        int j = n - i + 1;
        while (j-- > 0)
        {
            cout << '*';
        }
        cout << endl;
    }

    // ---------------
    //     ***
    //      **
    //       *
    // ---------------
    while (i < n)
    {
        int j = 0;
        while (j++ < i)
        {
            cout << ' ';
        }
        while (n - j++ + 1 > 0)
        {
            cout << '*';
        }
        cout << endl;
        i++;
    }

    // -------------------
    //       1
    //      121
    //     12321
    //    1234321
    // -------------------
    while (i < n)
    {
        int j = n - i - 1;
        while (j > 0)
        {
            cout << ' ';
            j--;
        }
        while (j <= i)
        {
            cout << ++j;
        }
        while (j - 1 > 0)
        {
            cout << --j;
        }
        i++;
        cout << endl;
    }
    */
    // -------------------
    // 12344321
    // 123**321
    // 12****21
    // 1******1
    // -------------------

    while (i < n)
    {
        int j = 0;
        while (j < n - i)
        {
            cout << j + 1;
            j++;
        }
        while (n - j > 0)
        {
            cout << '*';
            j++;
        }
        while (n - j < i)
        {
            cout << '*';
            j--;
        }
        while (j > 0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}
