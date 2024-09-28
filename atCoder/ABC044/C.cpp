#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    float A;
    cin >> N >> A;
    float x[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    int count = 0;

    // for (auto i : x)
    // {
    //     cout << "\n"
    //          << i;
    // }

    return 0;
}
/*
// do average
float average = 0;
for (int k = 0; k <= j; k++)
{
    average += x[k];
}
if (average / j == A)
{
    count++;
}*/