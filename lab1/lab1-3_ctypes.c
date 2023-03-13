/* Lab 1-3:
 *  * ctypes.c  */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("char\t\t\t: %d bytes\n", sizeof(char));
    printf("unsigned char\t\t: %d bytes\n", sizeof(unsigned char));
    printf("signed char\t\t: %d bytes\n", sizeof(signed char));
    printf("int\t\t\t: %d bytes\n", sizeof(int));
    printf("unsigned int\t\t: %d bytes\n", sizeof(unsigned int));
    printf("signed int\t\t: %d bytes\n", sizeof(signed int));
    printf("short int\t\t: %d bytes\n", sizeof(short int));
    printf("unsigned short\t\t: %d bytes\n", sizeof(unsigned short));
    printf("signed short\t\t: %d bytes\n", sizeof(signed short));
    printf("long int\t\t: %d bytes\n", sizeof(long int));
    printf("unsigned long\t\t: %d bytes\n", sizeof(unsigned long));
    printf("signed long\t\t: %d bytes\n", sizeof(signed long));
    printf("long long\t\t: %d bytes\n", sizeof(long long));
    printf("unsigned long long\t: %d bytes\n", sizeof(unsigned long long));
    printf("float\t\t\t: %d bytes\n", sizeof(float));
    printf("double\t\t\t: %d bytes\n", sizeof(double));
    printf("bool\t\t\t: %d bytes\n", sizeof(bool));

    return 0;
}
