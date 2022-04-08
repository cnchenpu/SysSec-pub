/* wri2ro.c
 * Write to Read-Only memory */

#include <stdio.h>

int main(void)
{
    char *str = "hello world";

    printf("Original str = %s\n", str);

    *str = "Happy World";

    printf("New str = %s\n", str);

    return 0;
}
