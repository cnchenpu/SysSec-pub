/* Lab 1-2:
 * arth.c   */

#include <stdio.h>

int main(void)
{
    unsigned int usnum = 0xffffffff;
    signed int snum = 0x7fffffff;  

    printf("The unsigned num is %u and %d bits long\n", usnum, sizeof(usnum) * 8);
    printf("us-num = 0x%x = %u\n", usnum, usnum);
    printf("us-num + 1 = 0x%x = %u\n", usnum + 1, usnum + 1);
    printf("==========================\n");
    printf("The signed num is %d and %d bits long\n", snum, sizeof(snum) * 8);
    printf("s-num = 0x%x = %d\n", snum, snum);
    printf("s-num + 1 = 0x%x = %d\n", snum + 1, snum + 1);    

    return 0;
}
