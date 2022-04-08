/* nonstr3.c
 * printf string type (%s) */

#include <stdio.h>
#include <string.h>

int main(void)
{

  char buf[100];
  char *ptr = buf;

  strcpy(ptr, "hello string");

  printf("%s\n", *ptr);

}
