#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    long fee = 0;

    if ((N - K) > 0)
        fee = K * X + (N - K) * Y;
    else
        fee = N * X;

    cout << fee;
    return 0;
}