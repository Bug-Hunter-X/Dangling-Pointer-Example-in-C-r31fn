int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; // Modifying the value pointed to by ptr
    int y = *ptr; // Copying the value pointed to by ptr to y
    printf("%d\n", y);
    *ptr = 30; // Modify value using ptr again.  This overwrites x.
    printf("%d\n", x); // x is modified through ptr
    return 0;
}