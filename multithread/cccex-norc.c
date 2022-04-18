#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
#define LOOPS 100000
int counter = 0;

void *inc()
{
  int i;
  for (i=0; i<LOOPS; i++) {
    pthread_mutex_lock( &mutex1 );   // lock
    counter = counter + 1;           // critical section
    pthread_mutex_unlock( &mutex1 ); // unlock
  }
}

void *dec()
{
  int i;
  for (i=0; i<LOOPS; i++) {
    pthread_mutex_lock( &mutex1 );   // lock
    counter = counter - 1;           // critical section
    pthread_mutex_unlock( &mutex1 ); // unlock
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
