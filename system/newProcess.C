#include <unistd.h>
#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  200

int  newProcess(char *);               /* process creation and execve call */

int  main(void)
{
	int pid;
	pid = newProcess("/bin/pwd");	
	return pid;
}

int newProcess(char *filename) {
	//process id
	int pid;

	//creates child process
	pid = fork();
	
	
	if(pid == 0) {                                //Checks it is the child process
		char *envp[] = {NULL};                //creates envp as a null array
		char *argv[] = {filename, NULL};      //creates argv with filename and null
		execve(filename, argv, envp);         //Executes the binary filename
	}

	return pid;   //returns the process id.
}

