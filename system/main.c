/*  main.c  - main */

#include <xinu.h>
#include <stdio.h>

long host2net(long x);

process	main(void)
{
	
	long x = 200;
	kprintf("%d\n", x);
	kprintf("0x%X\n", x);
	long net =host2net(x);
	kprintf("%d\n", net);
	kprintf("0x%X\n", net);
}
