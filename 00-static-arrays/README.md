# Static Arrays
Static arrays have a fixed size in memory when they are created and are created in contiguous blocks of memory.

- Accessing an element by index, adding/removing to/from the end element are `O(1)` operations.
- Inserting/Removing an element at the start or middle are `O(n)` operations in the worst case. This is because all the elements after the insertion point need to be shifted.
