#include <xinu.h>

long host2neta(long x) {
	long m;
	asm(
		"bswap	%1;"
		"movl   %1, %%eax;"
		"movl	%%eax, %0;"
		"ret;"
		:"=r"(m)
		:"r"(x) 
		:"%eax"
	);
	
	return m;
}

