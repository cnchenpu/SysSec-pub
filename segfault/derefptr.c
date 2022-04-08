/* derefptr.c
 * reference and dereference of pointer */

#include <stdio.h>
int main()
{
    int  var1;
    int* ptr1;

    var1 = 5;
    ptr1 = &var1;	/* ptr1 references var1 
                 	 * ptr1 returns the memory address of the variable var1*/
    printf("var1 = %d\n", var1);
    printf("(Reference: ptr1 = &var1) Address of var1: %p\n", ptr1);
    printf("(Dereference *ptr1) Value of the pointer (ptr1) point to (var1): %d\n", *ptr1);
    *ptr1 = 9;  	/* Dereference *ptr1, set the value to 9 */
    printf("After change *ptr1 to 9 (dereference *ptr1), then *ptr1 = %d, var1 = %d\n", *ptr1, var1);

    return 0;
}
