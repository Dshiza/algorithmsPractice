#include <iostream>
#include <vector>

using namespace std;

// O(nlogn)
int binarySearch(int *sortedArray, int size, int value)
{
    int k = 0;
    for (int b = size / 2; b >= 1; b /= 2)
    {
        while (k + b < size && sortedArray[k + b] <= value)
            k += b;
    }
    if (sortedArray[k] == value)
    {
        return k;
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