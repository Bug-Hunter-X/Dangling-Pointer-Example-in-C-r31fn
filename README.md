# Dangling Pointer Example in C

This repository demonstrates a simple example of a dangling pointer in C.  Dangling pointers occur when a pointer variable points to a memory location that has been freed or is no longer valid. This can lead to unpredictable behavior and crashes. 

The `bug.c` file shows the problematic code, and `bugSolution.c` presents a corrected version that avoids this issue.

## How to run the code:

1.  Save the `bug.c` and `bugSolution.c` files.
2.  Compile and run using a C compiler (e.g., GCC):
   ```bash
   gcc bug.c -o bug
   ./bug
   gcc bugSolution.c -o bugSolution
   ./bugSolution
   ```