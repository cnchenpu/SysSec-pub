#include <stdio.h>

int main() 
{
    char buffer[16];
    char input[32];

    strcpy(input, "This is an example of buffer overflow issue");

    snprintf(buffer, sizeof(buffer), "%s", input); // fixed the issue
    printf("%s\n", buffer);

    return 0;
}
