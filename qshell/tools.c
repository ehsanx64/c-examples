#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Print a message and exit with failure return value
 */
void die(char *message) {
	puts(message);
	exit(EXIT_FAILURE);
}
