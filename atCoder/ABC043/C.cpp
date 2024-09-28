#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    int N;
    cin >> N;
    int avg = 0;
    int num[N];
    for (int i = 0; i < N; i++)
    {

        cin >> num[i];
        avg += num[i];
    }

    avg = round((float)avg / N);

    int ans = 0;
    for (int i = 0; i < N; i++)
    {

        ans += (num[i] - avg) * (num[i] - avg);
    }
    cout << ans;

    return 0;
}