/* lab1cmd.c - xsh_myname */

#include <xinu.h>
#include <stdio.h>

/*------------------------------------------------------------------------
 * xhs_echo - write my name to stdout
 *------------------------------------------------------------------------
 */
shellcmd xsh_myname(int nargs, char *args[])
{

        if (nargs == 1) {
                printf("Emilio Lopez");

        } else {
		printf("No arguments for this command");
	}
        printf("\n");

        return 0;
}
