#include <stdio.h>
#include <stdlib.h>

int function_on_stack(int a) {
  // 'a' is a local variable stored on the stack
  int b = 5;  // 'b' is also a local variable on the stack
  return a * b;
}

int main() {
  int stack_var = 10;  // 'stack_var' is allocated on the stack

  // Allocate memory on the heap for a large array (assuming size unknown beforehand)
  int *heap_array = (int*)malloc(sizeof(int) * 100);

  if (heap_array == NULL) {
    printf("Heap memory allocation failed!\n");
    return 1;
  }

  // Access and modify elements of the heap array
  for (int i = 0; i < 100; i++) {
    heap_array[i] = i * 2;
  }

  // Call the function using stack-allocated variables
  int result = function_on_stack(stack_var);
  printf("Result from function (stack): %d\n", result);

  // Remember to deallocate heap memory to avoid leaks!
  free(heap_array);

  return 0;
}
