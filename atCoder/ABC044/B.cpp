#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int abcCount[26] = {0};
    string w;
    cin >> w;
    bool ans = true;
    for (string::size_type i = 0; i < w.length(); i++)
    {
        abcCount[w[i] - 97]++;
    }
    for (int i = 0; i < sizeof(abcCount) / sizeof(abcCount[0]); i++)
    {
        if (abcCount[i] % 2 != 0)
        {
            ans = false;
            break;
        }
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}