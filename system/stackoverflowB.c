#include <xinu.h>

void stackoverflowB(void) {
	char bChar = 'B';
	while(TRUE) {
		putc(CONSOLE, bChar);
		sleep(5);
	}
}
