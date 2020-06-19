#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "commands.h"
#include "tools.h"

int main (int argc, char **argv) {
	/*
	 * No need to go futher if there aren't enough parameters
	 */
	if (argc < 2) {
		die("Nothing to do.");
	}


	/*
	 * Figure out what root command to execute
	 */
	switch (get_key(argv[1])) {
	case CMD_PASS:
		if (argc < 3) {
			die("Not enough parameters to PASS command.");
		}

		/* Command parameter is the next element in array */
		commands_pass(argv[2]);
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

