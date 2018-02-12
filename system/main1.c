/*  main.c  - main 

#include <xinu.h>
#include <stdio.h>

process	main(void)
{
	char *name = "onandon";
	struct  procent *prptr;      //pointer to process table
	int32 i;
	int32 procid;               //Process id
	int procFound = 0;          //Bool for found process withname
	
	recvclr();
        resume(create(onandon, 2048, 30, name, 1, CONSOLE));
        sleep(14);	

	//Iterates over process table and finds process id with name = "onandon" 
	
	for (i = 0; i < prcount; i++) {
		prptr = &proctab[i];
		//printf("[%d]: name: %s state:%d\n", i, prptr->prname, prptr->prstate);
		// If process with name = "onandon" is found, set the process id to the table's index and set the procFound bool to true
		if(strcmp(name, prptr->prname) == 0) {
			procid = i;
			procFound = 1;         
		}
	}
	
	//If a process with name = "onandon" was found, kill that process
	
	if(procFound) {
		kill(procid);
	
	} 
	
	// DEBUG: Print out the process table
	//for (i = 0; i < prcount; i++) {
        //       prptr = &proctab[i];
        //       printf("[%d]: name: %s state:%d\n", i, prptr->prname, prptr->prstate);
        //}
	
	return OK;
}*/
