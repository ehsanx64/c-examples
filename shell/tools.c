#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "commands.h"

/*
 * Search look-up table for the given key and return its value.
 */
int get_key(char *key) {
	int i;
	t_symstruct *sym;

	/* Iterate through defined keys */
	for (i = 0; i < NKEYS; i++) {
		*sym = lookup_table[i];
		if (strcmp(sym->key, key) == 0)
			return sym->val;
	}

	/* If nothing found, the key (command) is probably undefined */
	return CMD_UNKNOWN;
}

/*
 * Print a message and return an error code
 */
void die(char *message) {
	puts(message);
	exit(EXIT_FAILURE);
}
