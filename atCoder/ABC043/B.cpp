#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<char> vec;
    char buffer;

    string s;
    getline(cin, s);

    for (string::size_type j = 0; j < s.length(); j++)
    {
        buffer = s[j];

        if (buffer == '0' || buffer == '1')
            vec.insert(vec.end(), buffer);
        else if (buffer == 'B' && !vec.empty())
            vec.erase(vec.end() - 1);
    }

    for (auto i : vec)
        cout << i;
    return 0;
}
