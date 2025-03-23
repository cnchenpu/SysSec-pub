#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_copy(const char* input) {
    char buffer[16];
    printf("Copying string into 16-byte buffer: %s\n", input);

    // No bounds checking - this can overwrite the return address on the stack
    strcpy(buffer, input);

    printf("Buffer content: %s\n", buffer);
    // When this function returns, if the return address was corrupted,
    // a segmentation fault will occur
}

int main() {
    char input[100];

    printf("Enter a long string: ");
    fgets(input, sizeof(input), stdin);

    string_copy(input);
}
