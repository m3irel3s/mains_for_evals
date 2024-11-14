#include <stdio.h>
#include "ft_printf.h"

// cc main.c ft_printf.c ft_print_str.c ft_print_char.c ft_print_digit.c ft_print_address.c

int main(void)
{
	int res;
	int res_ft;

	// Testing %c
	printf("Testing %%c:\n");
	res = printf("%c\n", 'A');
	res_ft = ft_printf("%c\n", 'A');
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %s
	printf("Testing %%s:\n");
	res = printf("%s\n", "Hello, world!");
	res_ft = ft_printf("%s\n", "Hello, world!");
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %p
	int num = 42;
	printf("Testing %%p:\n");
	res = printf("%p\n", (void *)&num);
	res_ft = ft_printf("%p\n", (void *)&num);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %d
	printf("Testing %%d:\n");
	res = printf("%d\n", -12345);
	res_ft = ft_printf("%d\n", -12345);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %i
	printf("Testing %%i:\n");
	res = printf("%i\n", 6789);
	res_ft = ft_printf("%i\n", 6789);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %u
	unsigned int u_num = 3000000000;
	printf("Testing %%u:\n");
	res = printf("%u\n", u_num);
	res_ft = ft_printf("%u\n", u_num);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %x
	printf("Testing %%x:\n");
	res = printf("%x\n", 255);
	res_ft = ft_printf("%x\n", 255);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %X
	printf("Testing %%X:\n");
	res = printf("%X\n", 255);
	res_ft = ft_printf("%X\n", 255);
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	// Testing %%
	printf("Testing %%%%:\n");
	res = printf("%%\n");
	res_ft = ft_printf("%%\n");
	printf("Return values - printf: %d, ft_printf: %d\n\n", res, res_ft);

	return 0;
}
