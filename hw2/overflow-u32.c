/* overflow-u32.c */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

main()
{
    unsigned int un;
    signed int sn;

    /* 1U: unsigned value 1
       (1U << 32)-1: 2^32 - 1 */
    un = (1 << 32 ) - 1;
    sn = (1 << 31 ) - 1;

    printf("The size of integer: %d bytes\n", sizeof(int));
    printf("The largest number of 32 bits of unsigned integer:        %12u\n", un);
    printf("The largest number of 32 bits of unsigned integer plus 1: %12u\n", un + 1);
    printf("The largest number of 32 bits of signed integer:          %12d\n", sn);
    printf("The largest number of 32 bits of signed integer plus 1:   %12d\n", sn + 1);
}
