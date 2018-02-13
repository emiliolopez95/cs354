#include <xinu.h>

int appl1(int x){
	int y = x * 2;
	
	struct  procent *prptr;
        prptr = &proctab[currpid];
        int *ptrtop;
        asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
	kprintf("2. after appl1() is created before fun1() is called:\n");
        kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n",prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));
	//kprintf("Stack size: %d\n",prptr->prstklen);
	
	char c = fun1(x, y);
	prptr = &proctab[currpid];
	asm(    "movl   %%esp, %0;"
                :"=r"(ptrtop)
                :
                :"%esp"
        );
        kprintf("4. after appl1() calls fun1() and after fun1() has returned:\n");
	kprintf("Base of the stack : Address - 0x%08X, Value - 0x%08X\n", prptr->prstkbase, *(int *)(prptr->prstkbase));
        kprintf("Top of the stack : Address - 0x%08X, Value - 0x%08X\n\n",ptrtop, *(int *)(ptrtop));
	return (int) c;
}
