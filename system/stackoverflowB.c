#include <xinu.h>

void stackoverflowB(void) {
	char bChar = 'B';
	struct  procent *prptr;
        prptr = &proctab[currpid];
        char *ptrtop;
        asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
        kprintf("Victim prcount = %d :\n", prcount);
        kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n",prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));
	while(TRUE) {
		putc(CONSOLE, bChar);
		sleep(5);
	}
}
