#include <stdio.h>
#include <string.h>

int main(void) 
{
    char buffer[16];
    printf("Enter your name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Hello, %s!\n", buffer);
    return 0;
}
