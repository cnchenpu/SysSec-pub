#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int num)
{
    if(num <= 1)
        return 1;
    else
        return factorial(num-1) * num;
}

int main(int argc, char *argv[])
{
    int i;
    if(argc < 2)
    {
        printf("Syntax: %s <any number>\n", argv[0]);
        return -1;
    }

    i = atoi(argv[1]);
    printf("Factorial of %d: %d\n", i, factorial(i));

    return 0;
}
