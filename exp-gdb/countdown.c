/* countdown.c
 * Example of recursive */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countdown(int num) 
{
    if(num == 0)
        return 0;
    else  
    {
        num--;
	printf(" %d,", num);
        return countdown(num);
    }
}

int main(int argc, char *argv[])
{
    int i;
    if(argc < 2)
    {
        printf("Syntax: %s <any number>\n", argv[0]);
        return -1;
    }

    i = atoi(argv[1]);
    printf("Input: %d\nOutput from recursive:\n", i);
    countdown(i);
    printf("\n");

    return 0;
}
