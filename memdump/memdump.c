/*
 * This program uses pointers to dump machine opcodes for the main function. 
 */

#include <stdio.h>

int main () {
	unsigned char *ptr;
	int i;

	ptr = (unsigned char *) &main;
	printf("The address of main(): %x\n", ptr);
	for (i = 0; i < 44; i++, ptr++) {
		printf("%p: %x\n", ptr, *ptr);
	}
}
