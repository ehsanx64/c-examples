/*
** stdlib.h Features Demo 
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    printf("Running uname command ...\n");
    system("uname -a");
    return EXIT_SUCCESS;
}
