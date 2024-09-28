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
        long long A, k;
        cin >> A >> k;
        long long B;
        if ((A - k) % 2 == 0 && A >= k)
            B = 0;
        else if ((A - k) % 2 != 0 && A > k)
            B = 1;
        else if ((A - k) % 2 == 0 && A < k)
            B = A - k;
        else
            B = A - k;
        cout << abs(B) << endl;
    }

    return 0;
}
