int main() {
    int x = 10;
    int y;
    int *ptr = &x;

    *ptr = 20; 
    y = *x; 
    printf("%d\n", y);

    // Allocate memory dynamically using malloc
    int *dynamicPtr = (int *)malloc(sizeof(int));
    if (dynamicPtr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Handle allocation failure
    }

    *dynamicPtr = 30;
    printf("%d\n", *dynamicPtr);
    //free the memory pointed to by dynamicPtr
    free(dynamicPtr);
    //set the pointer to NULL
    dynamicPtr = NULL;

    return 0;
} 