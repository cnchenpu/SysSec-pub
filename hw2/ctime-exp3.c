/* ctime-exp3.c */
#include <stdio.h>
#include <time.h>

main()
{
    time_t t1 = time(NULL); /* get current time in seconds */

    printf("Current time: %d seconds since 1970/01/01\n", t1);
    printf("Translate %d seconds to UTC time: %s\n", t1, ctime(&t1));
}
