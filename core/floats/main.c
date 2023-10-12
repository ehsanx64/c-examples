/*
 * floats
 */
#include <stdio.h>

/*
 * Constants
 */
#define PI 3.141592654f

/*
 * Function Prototypes
 */
static float sphere(float);

/*
 * Main Function
 */
int main(int argc, char *argv[])
{
	/* Define our variables */
	float volume;
	float radius = 3;

	volume = sphere(radius);
	printf("Volume: %f\n", volume);
	return 0;
}

/*
 * Caculate volume of a sphere, given its radius
 */
float sphere(float rad)
{
	float result;

	result = rad * rad * rad;
	result = 4 * PI * result / 3;
	return result;
}

