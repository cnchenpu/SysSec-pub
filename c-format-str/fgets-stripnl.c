#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[16];
    unsigned int len;
    printf("Enter your name: ");
    fgets(buffer, sizeof(buffer), stdin);
    len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }
    printf("Hello, %s!\n", buffer);
    return 0;
}
