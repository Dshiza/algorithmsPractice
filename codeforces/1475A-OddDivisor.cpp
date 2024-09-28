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
        bool flag = false;
        long long i = n;
        while (n != 1)
        {
            if (n % 2 != 0)
            {
                flag = true;
                break;
            }

            n = n / 2;
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
