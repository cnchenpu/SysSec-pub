#include <stdio.h>

void hacked()
{
    printf("You have been hacked!\n");
}

void niceday()
{
    char name[16];
    printf("What's your name?\n");
    gets(name);
    printf("Hi %s, wish you have a nice day.\n", name);
}

int main()
{
    niceday();
    return 0;
}
