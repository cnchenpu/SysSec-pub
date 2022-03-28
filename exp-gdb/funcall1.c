#include <stdio.h>

int fun1(char *name)
{
    printf("The name is: %s\n", name);
    printf("fun1 calls fun2.\n");
    fun2(4096);

    return 0;
}

int fun2(int number)
{
    printf("The number is: %d\n", number);

    return 0;
}

int main()
{
    printf("main calls fun1.\n");
    fun1("Andy");

    return 0;
}
