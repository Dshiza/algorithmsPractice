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
        int x = 1;
        int n = 0;
        cin >> n;
        int sqN = floor(sqrt(n));

        cout << endl;

        long long sum = 1;
        long long res = n;
        for (int i = 1; sum < n; i++)
        {
            sum += (1LL << i); // pow function gave time limit exceeded

            if (n % sum == 0)
            {
                res = n / sum;
                break;
            }
            // cout << "passed here! = " << sum;
        }
        cout << res;
    }

    return 0;
}
