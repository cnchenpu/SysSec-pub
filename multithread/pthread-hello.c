#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* childthread(void* data) 
{
    int i;
    char *str = (char*) data;
  
    for(i = 0; i < 3; ++i) 
    {
        printf("%s\n", str);
        sleep(1);
    }
    pthread_exit(NULL); 
}

int main() 
{
    int i;
    pthread_t t; 
    pthread_create(&t, NULL, childthread, "Hi, this is child thread."); 

    for(i = 0; i < 3; ++i) 
    {
        printf("Hello, I'm main thread.\n"); 
        sleep(1);
    }

    pthread_join(t, NULL);
    return 0;
}
