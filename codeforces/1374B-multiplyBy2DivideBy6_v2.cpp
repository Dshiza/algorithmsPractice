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

        int count2 = 0,
            count3 = 0;
        while (n % 2 == 0)
        {
            n = n / 2;
            count2++;
        }
        while (n % 3 == 0)
        {
            n = n / 3;
            count3++;
        }
        if (count2 <= count3 && n == 1)
            cout << (count3 - count2 + count3) << endl;

        else
            cout << -1 << endl;
    }

    return 0;
}
