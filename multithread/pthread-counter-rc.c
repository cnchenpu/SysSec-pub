#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int counter = 0;

void* counterthread() 
{
    int i, tmp;

    tmp = counter;
    sleep(1); 
    counter = tmp + 1;
        
    printf("Counter = %d\n", counter);
    
    pthread_exit(NULL);
}

int main() 
{
    pthread_t t1, t2;
  
    pthread_create(&t1, NULL, counterthread, NULL);
    pthread_create(&t2, NULL, counterthread, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
  
   return 0;
}
