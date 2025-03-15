#include <stdio.h>
#include <stdlib.h>

int global_var;                                         // Global variable, stored in the data segment

int main()
{
    int local_var;                                      // Local variable, stored on the stack
    int *heap_var = (int *)malloc(sizeof(int));         // Dynamically allocated memory, stored on the heap

    printf("Code Segment: %p\n", main);                 // Address of the code segment
    printf("Data Segment: %p\n", &global_var);          // Address of the data segment
    printf("Heap: %p\n", heap_var);                     // Address of the heap
    printf("Stack: %p\n", &local_var);                  // Address of the stack

    free(heap_var);
    return 0;
}
