#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int> &subset, vector<int> &nums, int index)
{
    // Base case: if we've processed all elements
    if (index == nums.size())
    {
        // Print the subset
        for (int i : subset)
        {
            cout << i << " ";
        }

        cout << endl;
        return;
    }

    // Exclude the current element
    generateSubsets(subset, nums, index + 1);

    // Include the current element
    subset.push_back(nums[index]);
    generateSubsets(subset, nums, index + 1);

    // Backtrack: remove the current element
    subset.pop_back();
}

int main()
{
    vector<int> nums = {7, 9, 8, 9};
    vector<int> subset;
    generateSubsets(subset, nums, 0);
    return 0;
}
