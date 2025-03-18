#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables are stored in the data segment of virtual memory
int global_initialized = 100;
int global_uninitialized;  // Will be initialized to 0 by default

void demonstrate_stack(int level) {
    // These variables are allocated on the stack
    int local_var = level;
    char buffer[1024];  // 1KB buffer on stack

    // Print address information to see memory layout
    printf("Stack level %d:\n", level);
    printf("  Address of local_var: %p\n", &local_var);
    printf("  Address of buffer:    %p\n", &buffer);

    // Fill buffer with some data
    sprintf(buffer, "This is stack level %d", level);

    // Recursive call to demonstrate stack growth
    // (Be careful with recursion depth to avoid stack overflow)
    if (level < 3) {
        printf("  Calling deeper level...\n");
        demonstrate_stack(level + 1);
    }

    printf("  Returning from level %d\n", level);
    // When this function returns, all its local variables are deallocated
    // as the stack frame is popped off
}

int main() {
    printf("===== Memory Address Demonstration =====\n");

    // Show addresses of global variables (data segment)
    printf("Global variables (Data Segment):\n");
    printf("  Address of global_initialized:   %p\n", &global_initialized);
    printf("  Address of global_uninitialized: %p\n", &global_uninitialized);

    // Allocate memory on the heap (dynamic memory)
    int *heap_var = malloc(sizeof(int) * 100);  // Allocate space for 100 integers
    char *heap_string = malloc(100);           // Allocate 100 bytes

    if (heap_var == NULL || heap_string == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize heap memory
    int i;
    for (i = 0; i < 100; i++) {
        heap_var[i] = i;
    }
    strcpy(heap_string, "This string is stored on the heap");

    // Show addresses of heap variables
    printf("\nHeap variables (Heap Segment):\n");
    printf("  Address of heap_var:    %p\n", heap_var);
    printf("  Address of heap_string: %p\n", heap_string);

    // Show address of main function (text/code segment)
    printf("\nCode Segment:\n");
    printf("  Address of main function: %p\n", main);

    // Local variables in main (stack)
    int main_local = 42;
    printf("\nStack variables in main:\n");
    printf("  Address of main_local: %p\n", &main_local);

    // Demonstrate stack usage with recursion
    printf("\n===== Stack Demonstration =====\n")
    demonstrate_stack(0);

    // Free heap memory to avoid memory leaks
    free(heap_var);
    free(heap_string);

 return 0;
}        
