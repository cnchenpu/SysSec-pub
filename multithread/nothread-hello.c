#include <stdio.h>
#include <unistd.h>

void* childthread(void* data)
{
    int i;
    char *str = (char*) data;

    for(i = 0; i < 3; ++i)
    {
        printf("%s\n", str);
        sleep(1);
    }
}

int main()
{
    int i;
    childthread("Hi, this is child thread.");

    for(i = 0; i < 3; ++i)
    {
        printf("Hello, I'm main thread.\n");
        sleep(1);
    }

    return 0;
}
