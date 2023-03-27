#include <stdio.h>

int main()
{
  char buffer[10];

  printf("Enter a message: ");
  scanf("%s", buffer);
  printf(buffer);
  printf("\n");

  return 0;
