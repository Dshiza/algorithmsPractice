#include <iostream>
#include <vector>

using namespace std;

// O(nlogn)
int binarySearch(int *sortedArray, int size, int value)
{
    int a = 0, b = size - 1;
    while (a <= b)
    {
        int k = (a + b) / 2;
        if (sortedArray[k] == value)
        {
            // x found at index k
            return k;
        }
        if (sortedArray[k] > value)
            b = k - 1;
        else
            a = k + 1;
    }
    return -1;
}
int main()
{
    int sortedArray[] = {2, 4, 6, 7, 11, 15, 254, 500, 1042, 2048};
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 254);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 500);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 1042);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 2048);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 253);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 2);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 4);
    cout << binarySearch(sortedArray, sizeof(sortedArray) / sizeof(sortedArray[0]), 11);
    return 0;
}