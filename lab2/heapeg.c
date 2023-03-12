/* heageg.c */
/* Heap sbrk and brk example */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
        void *curr_brk, *tmp_brk = NULL;

        printf("Heap probram break example, PID: %d\n", getpid());

        /* sbrk(0) gives current program break location */
        tmp_brk = curr_brk = sbrk(0);
        printf("1. Initial sbrk location (start of Heap): %p\n", curr_brk);
        getchar();

        /* brk(addr) increments/decrements program break location */
        /* Set the brk (end of heap) by increase 4096 of sbrk */
        brk(curr_brk+4096);

        curr_brk = sbrk(0);
        printf("2. Increase 4096 of sbrk. Heap (sbrk-brk) location: %p-%p\n", tmp_brk, curr_brk);
        getchar();

        /* Return to the initial sbrk */
        brk(tmp_brk);

        curr_brk = sbrk(0);
        printf("3. Return all heap space, go back to initial sbrk location: %p\n", curr_brk);
        getchar();

        return 0;
}
