# What is binary search

## Requirements

- It only works on a sorted array.

## How it works

- First searches the middle, and if value(and not found) is higher or lower to the middle goes to the corresponding group. Then cuts it again, checks if it has found the value.
  And does this until finds the value.

### Instructions

1. Check the value in the center of the array.
2. If the target value is lower, search the left half of the array. If the target value is higher, search the right half.
3. Continue step 1 and 2 for the new reduced part of the array until the target value is found or until the search area is empty.
4. If the value is found, return the target value index. If the target value is not found, return -1.
