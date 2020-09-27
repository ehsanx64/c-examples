/*
 * bango
 */

#include <stdio.h>


/*
 * Function Prototypes
 */
void fire(void);


/*
 * Main Function
 */
int main(int argc, char *argv[])
{
	puts("Firing...");
	fire();
	puts("Fired!");
}


/*
 * fire
 */
void fire(void)
{
	puts("Bang!");
}

