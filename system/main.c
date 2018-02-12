/*  main.c  - main */

#include <xinu.h>

process	main(void)
{
	/*Testing part 3 */
	long x = 200;
	kprintf("%d\n", x);
	kprintf("0x%X\n\n", x);
	
	//Test host2net
	long net =host2net(x);
	kprintf("%d\n", net);
	kprintf("0x%X\n\n", net);

	//Test host2netca
	net =host2netca(x);
        kprintf("%d\n", net);
        kprintf("0x%X\n\n", net);

	//Test host2neta
	net =host2neta(x);
        kprintf("%d\n", net);
        kprintf("0x%X\n\n", net);
}
