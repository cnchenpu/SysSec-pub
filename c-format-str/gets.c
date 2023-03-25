#include <stdio.h>
#include <string.h>

int main(void) 
{
    char buffer[16];
    printf("Enter your name: ");
    gets(buffer);
    printf("Hello, %s!\n", buffer);
    return 0;
}
