#include <stdio.h>

int main() 
{
    int a = 1;
    int b = -2147483648; // minimum value of integer type
    int c = a - b;
    printf("%d\n", c);
    return 0;
}
