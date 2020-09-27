#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "tools.h"
#include "commands.h"
#include "keyvals.h"


int main (int argc, char **argv) {
	/*
	 * No need to go futher if there aren't enough parameters
	 */
	if (argc < 2) {
		printf("qShell v");
		commands_version();
		printf("\n\n");
		die("Error!");
	}


	/*
	 * Check for commands and execute 'em
	 */
	switch (get_command(argv[1])) {
	case CMD_GET:
		if (argc < 3) {
			die("Not enough parameters to GET command.");
		}

		/* Command parameter is the next element in array */
		commands_get(argv[2]);
		break;

	case CMD_CLIP:
		if (argc < 3) {
			die("Not enough parameters to CLIP command.");
		}

		/* Command parameter is the next element in array */
		//commands_pass(argv[2]);
		break;

	case CMD_RUN:
		if (argc < 3) {
			die("Not enough parameters to RUN command.");
		}

		/* Command parameter is the next element in array */
		commands_run(argv[2]);
		break;

	case CMD_VERSION:
		commands_version();
		break;

	default:
		die("No valid command found to execute!");
		break;
	}

	return EXIT_SUCCESS;
}

