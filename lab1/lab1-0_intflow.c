/* lab 1-0: int-overflow.c 
 * Store a large value variable into a smaller one */

#include <stdio.h>

int main(void)
{
    int l;
    short s;
    char c;
      
    l = 0xdeadbeef;
    s = l;
    c = l;
      
    printf("int   l = 0x%x (%d bits)\n", l, sizeof(l) * 8);
    printf("short s = 0x%x (%d bits)\n", s, sizeof(s) * 8);
    printf("char  c = 0x%x (%d bits)\n", c, sizeof(c) * 8);
      
    return 0;
      
}
