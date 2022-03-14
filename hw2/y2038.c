/* hw2-y2038.c 
 * Check Year 2038 problem */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    time_t sign32_time;
    char* c_time_string;

    /* 1U: unsigned value 1 
       (1U << 32)-1: 2^32 - 1 */
    sign32_time = (time_t)((1U << 31)-1);

    /* Convert to local time format. */
    c_time_string = ctime(&sign32_time);

    printf("Translate the maximum signed integer Unix time: %d to UTC time: %s", sign32_time, c_time_string);

    sign32_time += 1;
    c_time_string = ctime(&sign32_time);
    printf("After next second: %d -> %s", sign32_time, c_time_string);

    sign32_time += 1;
    c_time_string = ctime(&sign32_time);
    printf("After another second: %d -> %s", sign32_time, c_time_string);

    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of time_t: %d bytes\n", sizeof(time_t));
    return 0;
}
