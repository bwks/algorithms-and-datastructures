# Dynamic Arrays
A dynamic arrays capacity automatically grows in size as the existing capacity fills up. This is usually in multiples of 2x the current capacity doubling the size of the array.

- Accessing an element by index, adding/removing to/from the end element are `O(1)` operations.
- Inserting/Removing an element at the start or middle are `O(n)` operations in the worst case. This is because all the elements after the insertion point need to be shifted.
