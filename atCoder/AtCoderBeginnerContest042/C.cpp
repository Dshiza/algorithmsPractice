#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
bool allowed[10];

bool isValidNumber(long num)
{
    bool validation = true;
    return validation;
}

int main()
{
    int N, K, i = 0;
    cin >> N >> K;

    // vector
    vector<int> forbiddenDigits(K);

    while (K--)
    {

        cin >> forbiddenDigits[i];
        allowed[forbiddenDigits[i]] = true;
        i++;
    }

    double max = *max_element(forbiddenDigits.begin(), forbiddenDigits.end());
    double min = *min_element(forbiddenDigits.begin(), forbiddenDigits.end());

    vector<int> factors;
    factors.push_back(0);
    while (N / 10 != 0)
    {
        factors.push_back(N % 10);
        N = N / 10;
    }
    factors.push_back(N % 10);
    vector<int> numbCreated(factors.size() + 1);
    fill_n(numbCreated.begin() + 1, factors.size(), min);

    for (size_t i = 0; i < factors.size() - 1; ++i)
    {
        cout << numbCreated[i];
    }

    long result = 0;
    for (int digit : numbCreated)
    {
        // Assumes each element is a digit (0-9)
        result = result * 10 + digit;
    }
    cout << result;
    while (1)
    {

        if (isValidNumber(result++))
        {
        }
    }

    // cout << max << "  " << min;
    return 0;
}
