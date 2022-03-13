/* Lab 1-1: intcast.c
 * Truncate the input string  */


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned short s;
    int i;
    char buf[30];

    if(argc < 3)
    {
        printf("Usage: %s <the length of string> <a string>\n", argv[0]);
        return -1;
    }

    i = atoi(argv[1]);  /* Convert string into integer */
    s = i;              /* Assign int into short */

    printf("Integer casting from int %d to unsigned short %d\n", i, s);
    printf("sizeof(int): %d bytes\n", sizeof(i));
    printf("sizeof(unsigned short): %d bytes\n", sizeof(s));

    if(s >= 30){
        printf("The buffer length is only 30!\n");
        return -1;
    }

    printf("The length of string: %d\n", s);

    memcpy(buf, argv[2], i);
    buf[i] = '\0';
    printf("Truncated string: %s\n", buf);
    
    return 0;
}
