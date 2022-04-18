#include <stdio.h>
#include <pthread.h>

#define LOOPS 100000
int counter = 0;      /* global variable */

void *inc()
{
  int i;
  for (i=0; i<LOOPS; i++) {
    counter = counter + 1;
  }
}

void *dec()
{
  int i;
  for (i=0; i<LOOPS; i++) {
    counter = counter - 1;
  }
}

int main() 
{
  pthread_t thread1, thread2;

  pthread_create(&thread1, NULL, inc, NULL);
  pthread_create(&thread2, NULL, dec, NULL);

  pthread_join( thread1, NULL);
  pthread_join( thread2, NULL);
  printf("counter=%d\n", counter);
}
