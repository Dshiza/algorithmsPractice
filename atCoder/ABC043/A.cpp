#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int candies = 0;
    for (int i = 1; i <= N; i++)
    {
        candies += i;
    }

    cout << candies;
    return 0;
}
