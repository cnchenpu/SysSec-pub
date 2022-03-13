/* Lab 1-3:
 * ctypes.c  */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("char: %d bytes\n", sizeof(char));
    printf("unsigned char: %d bytes\n", sizeof(unsigned char));
    printf("signed char: %d bytes\n", sizeof(signed char));
    printf("int: %d bytes\n", sizeof(int));
    printf("unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("signed int: %d bytes\n", sizeof(signed int));
    printf("short int: %d bytes\n", sizeof(short int));
    printf("unsigned short: %d bytes\n", sizeof(unsigned short));
    printf("signed short: %d bytes\n", sizeof(signed short));
    printf("long int: %d bytes\n", sizeof(long int));
    printf("unsigned long: %d bytes\n", sizeof(unsigned long));
    printf("signed long: %d bytes\n", sizeof(signed long));
    printf("long long: %d bytes\n", sizeof(long long));
    printf("unsigned long long: %d bytes\n", sizeof(unsigned long long));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n", sizeof(double));
    printf("bool: %d bytes\n", sizeof(bool));

    return 0;
}
