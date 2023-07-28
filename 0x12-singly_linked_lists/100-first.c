#include <stdio.h>
void my_constructor(void)__attribute__((constructor));
/**
 * my_constructor - prints a sentence before the main
 */

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
