#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    int ph[3];
    cin >> ph[0] >> ph[1] >> ph[2];
    int count5 = 0, count7 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (ph[i] == 5)
            count5++;
        if (ph[i] == 7)
            count7++;
    }
    if (count5 == 2 && count7 == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
