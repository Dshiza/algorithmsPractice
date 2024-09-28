#include <iostream>
#include <algorithm>

using namespace std;

int linearSearch(int *array, int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << linearSearch(array, sizeof(array) / sizeof(array[0]), 5);
    return 0;
}