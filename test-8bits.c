#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

main()
{
    unsigned int un;
    signed int sn;
    
    /* 1U: unsigned value 1 
       (1U << 31)-1: 2^32 - 1 */
    un = (1 << 8 ) - 1; 
    sn = (1 << 7 ) - 1; 

    printf("The size of integer: %d bytes\n", sizeof(int));
    printf("The largest number of 8 bits of unsigned integer: %u\n", un);
    printf("The largest number of 8 bits of signed integer:   %d\n", sn);
}
