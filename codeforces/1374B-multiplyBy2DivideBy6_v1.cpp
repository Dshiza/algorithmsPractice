#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        int moves = 0;
        while (n != 1)
        {
            if (n % 6 == 0)
                n = n / 6;
            else if (n % 3 == 0)
                n *= 2;
            else
            {
                moves = -1;
                break;
            }
            moves += 1;
        }
        cout << moves << endl;
    }

    return 0;
}
