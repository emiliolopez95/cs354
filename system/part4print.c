#include <xinu.h>

void part4print(char *str) {

 	struct  procent *prptr;
        prptr = &proctab[currpid];
        int *ptrtop;
        asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
        kprintf("%s\n", str);
        kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n",prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));

}
