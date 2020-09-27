#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "commands.h"
#include "keyvals.h"
#include "tools.h"

#define QSHELL_VERSION "1.0.0"

/*
 * Search look-up table for the given key and return its value.
 */
int get_command(char *key) {
	int i;
	command_t *cmd;

	cmd = &app_commands;

	/* Iterate through defined keys */
	for (i = 0; i < NKEYS; i++, cmd++) {
		if (strcmp(cmd->key, key) == 0)
			return cmd->val;
	}

	/* If nothing found, the key (command) is probably undefined */
	return CMD_UNKNOWN;
}


void commands_get(char *param) {
	char *out = malloc(1000);
	char *val = get_val(param);

	if (strlen(val) < 1) {
		// If no password is defined with the same key do nothing
		printf("Nothing to clip\n");
	} else {
		// Otherwise put the password into the clipboard
		sprintf(out, "echo %s | clip", val);
		printf("%-5s: %s -> %s\n", "GET", param, val);
		system(out);
	}

	free(out);
}

void commands_run(char *param) {
	char *out = malloc(1000);

	out = param;
	printf("Ran: %s\n", out);
	system(out);
	free(out);
}

void commands_version() {
	printf("%s\n", QSHELL_VERSION);
}
