#include <stdio.h>

/**
 * main Program entry point
 * output to standard error
 * wthout puts() or printf
 * Return : Always 1 (Success)
 */

int main(void)
{
	char[] s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, s);

	return (1);
}
