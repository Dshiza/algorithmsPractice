#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    string inp;
    int st = -1, sp = -1;
    cin >> inp;
    bool ans = false;
    if (inp.length() < 2)
        ans = false;
    else
    {
        // Checking substring length 2  - sliding window
        for (int i = 0; i < inp.length() - 1; i++)
        {
            if (inp[i] == inp[i + 1])
            {
                // cout << inp[i];
                ans = true;
                st = i + 1;
                sp = i + 2;
                break;
            }
        }

        // Checking substring length 3  - sliding window
        for (int i = 0; i < inp.length() - 2; i++)
        {
            if (inp[i] == inp[i + 1] || inp[i] == inp[i + 2] || inp[i + 1] == inp[i + 2])
            {
                ans = true;
                st = i + 1;
                sp = i + 3;
                break;
            }
        }
    }
    if (ans)
    {
        cout << st << " " << sp;
    }
    else
        cout << -1 << " " << -1;
}
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <bits/stdc++.h>
// #include <iterator>

// using namespace std;

// bool cmp(pair<string, int> &a,
//          pair<string, int> &b)
// {
//     return a.second < b.second;
// }
// bool sort(map<string, int> &M)
// {

//     // Declare vector of pairs
//     vector<pair<string, int>> A;

//     // Copy key-value pair from Map
//     // to vector of pairs
//     for (auto &it : M)
//     {
//         A.push_back(it);
//     }

//     // Sort using comparator function
//     sort(A.begin(), A.end(), cmp);

//     // map<string, int>::const_iterator it1 = A.end();
//     // map<string, int>::const_iterator it2 = --it1;
//     // map<string, int>::const_iterator it3 = --it1;
//     bool ans = false;
//     if (A[A.size() - 1].second > A[A.size() - 2].second)
//     {
//         // cout << A[A.size() - 2].first << "-" << A[A.size() - 2].second << "    " << A[A.size() - 1].first << "-" << A[A.size() - 1].second;
//         ans = true;
//     }

//     return ans;
// }
// int main()
// {

//     // nednev
//     string inp;
//     int st = 1, sp = 0;
//     cin >> inp;
//     bool ans = false;
//     if (inp.length() < 2)
//         ans = false;
//     else
//     {
//         // 97-122
//         //  Declare Map
//         map<string, int> M;
//         M = {
//             {"a", 0},
//             {"b", 0},
//             {"c", 0},
//             {"d", 0},
//             {"e", 0},
//             {"f", 0},
//             {"g", 0},
//             {"h", 0},
//             {"i", 0},
//             {"j", 0},
//             {"k", 0},
//             {"l", 0},
//             {"m", 0},
//             {"n", 0},
//             {"o", 0},
//             {"p", 0},
//             {"q", 0},
//             {"r", 0},
//             {"s", 0},
//             {"t", 0},
//             {"u", 0},
//             {"v", 0},
//             {"w", 0},
//             {"x", 0},
//             {"y", 0},
//             {"z", 0}};

//         for (long unsigned int i = 0; i < inp.length(); i++)
//         {
//             string ch(1, inp[i]); // Convert char to string
//             M[ch]++;
//             if (i >= 2)
//             {
//                 bool ls = sort(M);
//                 if (ls)
//                 {
//                     ans = ls;
//                     sp = i + 1;
//                     break;
//                 }
//             }
//         }
//         // for (map<string, int>::const_iterator it = M.begin();
//         //      it != M.end(); ++it)
//         // {
//         //     std::cout << it->first << " " << it->second << " "
//         //                                                    "\n";
//         // }
//         if (ans)
//         {
//             cout << st << " " << sp;
//         }
//         else
//             cout << "-1 -1";
//     }
//     return 0;
// }

// /*
// unbalanced t ->
//     >=2
//     t.length/2 == k
// */

// /*v1:Complete this example - judge(runtime error or wa)
// v2:array with alphabet, save to another variable sort it each cycle */