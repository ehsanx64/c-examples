#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <ctype.h>
#include "text-histogram.h"

unsigned char char_table[] = {
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	',', '.', ' ', 
};

unsigned char idx;
int count_table[sizeof(char_table)] = {0};

int main (int argc, char *argv[]) {
	FILE *infile;
	struct stat file_stat;
	unsigned char *buffer;
	int i, file_size;

	if (argc != 2) {
		usage((char *) argv[0]);
		die("Incorrent arguments");
	}

	if (!(infile = fopen(argv[1], "r"))) {
		die("Opening file");
	}

	stat(argv[1], &file_stat);
	file_size = file_stat.st_size;

	if (!(buffer = malloc(file_size))) {
		fclose(infile);
		die("Cannot allocate memory");
	}

	if (!(fgets(buffer, file_size, infile))) {
		fclose(infile);
		free(buffer);
		die("Error reading file");
	}

	fclose(infile);

	i = 0;
	idx = 0;
	printf("Filesize: %d\n", file_size);

	while (i < file_size) {
		for (idx = 0; idx < sizeof(char_table); idx++) {
			if (tolower(buffer[i]) == char_table[idx]) {

				count_table[idx]++;
			}
		}
		i++;
	}

	for (i = 0; i < sizeof(char_table); i++) {
		printf("%c: %d\n", char_table[i], count_table[i]);
	}


}

void usage(char *prgname) {
	printf("Usage:\n\t%s filename\n", prgname);
}

void die(char *string) {
	printf("Failed: %s\n", string);
	exit(EXIT_FAILURE);
}


