#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;

void solve()
{
}

int main()
{
    char N[26];

    int L;
    cin >> N >> L;
    char digitsDisliked[L];

    for (int i = 0; i < L; i++)
    {
        cin >> digitsDisliked[i];
    }

    int k = 0;
    for (int i = 0; i < L; i++)
    {
        bool exists = std::find(std::begin(digitsDisliked), end(digitsDisliked), N[i]);
    }

    return 0;
}
