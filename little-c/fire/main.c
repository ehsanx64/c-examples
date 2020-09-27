/*
 * fire
 */

#include <stdio.h>


/*
 * Function Prototypes
 */
void fire(int n);


/*
 * Main Function
 */
int main(int argc, char *argv[])
{
	int fire_count = 5;

	puts("Firing...");
	fire(fire_count);
	printf("Fired %d times!\n", fire_count);
}


/*
 * fire
 */
void fire(int n)
{
	int i;

	for (i = 1; i <= n; ++i) {
		puts("Bang!");
	}
}

