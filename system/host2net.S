# ----------------------------------------------------------------------------------------
# Writes "Hello, World" to the console using only system calls. Runs on 64-bit Linux only.
# To assemble and run:
#
#     gcc -c hello.s && ld hello.o && ./a.out
#
# or
#
#     gcc -nostdlib hello.s && ./a.out
# ----------------------------------------------------------------------------------------

		.globl	host2net
		.text

host2net:	#Prologue
		push	%ebp
		movl	%esp,%ebp
		
		movl 	8(%ebp), %eax	#move x into ebx
		bswap 	%eax		#
		
		#epilogue
		movl	%esp, %ebp
		pop 	%ebp
		ret
