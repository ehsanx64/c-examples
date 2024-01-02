/*
** Weight conversion program
*/
#include <stdio.h>
#include <stdlib.h>

#include "conversion.h"

int main (int argc, char **argv)
{
    int pounds;
    float kilos;

    printf("Pounds\tKilos\tOunces\tGrams\n");
    for (pounds = 1; pounds < 500; pounds += 20) {
        kilos = pounds_to_kilo(pounds);
        printf("%3d\t%6.2f\t%d\t%011.4f\n", 
                pounds, kilos, pounds_to_ounces(pounds), 
                kilo_to_grams(kilos));
    }

    return EXIT_SUCCESS;
}
