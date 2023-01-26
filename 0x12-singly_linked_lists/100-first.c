#include<stdio.h>
void before_main(void) __attribute__((constructor));
/**
 * before_main - run before main
 */
void before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
