#include <xinu.h>

char fun1(int x, int y) {
	struct  procent *prptr;
        prptr = &proctab[currpid];
        char *ptrtop;
        asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
        kprintf("3. after appl1() calls fun1() and before fun1() returns:\n");
        kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n", prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));

	return (char) (x + y);
}
