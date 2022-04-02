#include <stdio.h>

int fun1(char *name, int id)
{
    int number = 100;

    printf("fun1 - The name is: %s\n", name);
    printf("fun1 - His ID is: %d\n", id);
    fun2(number);

    return 0;
}

int fun2(int number)
{
    printf("fun2 - The number is: %d\n", number);

    return 0;
}

int main(int argc, char *argv[])
{
    if(argc <= 2)
        fun1("Andy", 101);
    else
        fun1(argv[1], atoi(argv[2]));

    return 0;
}
