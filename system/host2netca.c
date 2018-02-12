#include <stdio.h>

long host2netca(long x) {
	long byte0 = (x & 0x000000FF) << 24;
	long byte1 = (x & 0x0000FF00) << 8;
	long byte2 = (x & 0x00FF0000) >> 8;
	long byte3 = (x & 0xFF000000) >> 24;

	return byte0 | byte1 | byte2 | byte3;	
}

