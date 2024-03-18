#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell() 
{
  system("/bin/sh");
}

void hello() 
{
  printf("hello all!!\n");
  exit(0);
}

void func(int a, int b, char *str) 
{
  int c = 0xdeadbeef;
  char buf[4];
  strcpy(buf, str);
}

int main(int argc, char**argv) 
{
  func(0xaaaaaaaa, 0xbbbbbbbb, argv[1]);
  return 0;
}
