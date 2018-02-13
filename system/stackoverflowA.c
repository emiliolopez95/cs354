#include <xinu.h>

void stackoverflowA(void) {
	struct  procent *prptr;
        prptr = &proctab[currpid];
        char *ptrtop;
        asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
        kprintf("Attacker:\n");
        kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n",prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));
	
	/*kprintf("prcount: %d\n", prcount);
        for(int i = 0; i <= prcount; i ++){
                kprintf("Process:  %s, pid=[%d], BS = 0x%08X\n",proctab[i].prname, i, proctab[i].prstkbase);
	}*/
}
