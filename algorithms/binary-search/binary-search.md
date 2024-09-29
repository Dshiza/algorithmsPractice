# What is binary search

## Requirements

- It only works on a **sorted** array.

## How it works

- First searches the middle, and if value(and not found) is higher or lower to the middle goes to the corresponding group. Then cuts it again, checks if it has found the value.
  And does this until finds the value.

### Instructions

1. Check the value in the center of the array.
2. If the target value is lower, search the left half of the array. If the target value is higher, search the right half.
3. Continue step 1 and 2 for the new reduced part of the array until the target value is found or until the search area is empty.
4. If the value is found, return the target value index. If the target value is not found, return -1.

## c++ and common use cases

for c++(standard library), we have:

- _lower_bound_ which gives a pointer to the array **element** which is at least equal to x.
- _higher_bound_ which gives a pointer to the array **element** which is larger than x.
- _equal_range_ returns both, previous operations(both pointers).
  if x not in the array then it points to element after the last one of the array, like the _end()_ iterator.

Example:

```
auto k = lower_bound(array,array+n,x)-array;
if (k < n && array[k] == x) {
// x found at index k
}
```

Example(gives a count that is equal to x, because there might be duplicates):

```
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
cout << b-a << "\n";
```

Or, with _equal_range_:

```
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";
```

- Use cases:
- Suppose you want to find the smallest value where a function changes, which means me cases the solution:

```
int x = -1;
for (int b = z; b >= 1; b /= 2) {
while (!ok(x+b)) x += b;
}
int k = x+1;
```

- The initial jump has to be higher enough, _z_.
