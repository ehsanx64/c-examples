/*
 * functions
 */

#include <stdio.h>

/*
 * Function Prototypes
 */
void func1(void);
void func2(void);

/*
 * Main Function
 */
int main(int argc, char *argv[])
{
	puts("main()");
	func1();
	func2();
}

/*
 * func1
 */
void func1(void)
{
	puts("func1()");
	func2();
}

/*
 * func2
 */
void func2(void)
{
	puts("func.()");
	func1();
}

