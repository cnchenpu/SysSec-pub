#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) 
{
    char buffer[16];
    if (argc > 1) {
        strncpy(buffer, argv[1], sizeof(buffer));
        buffer[sizeof(buffer) - 1] = '\0';
        printf("%s\n", buffer);
    }
    return 0;
}
