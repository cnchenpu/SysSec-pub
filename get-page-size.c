#include <unistd.h>
#include <stdio.h>

int main() 
{
    size_t psize = getpagesize();

    printf("Size of page_size: %d\n", psize);

    return 0;
}
