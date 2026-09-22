#include <assert.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);

void	test_ex0(int (*tex0)(int))
{
	assert(tex0(1) == 1);
	assert(tex0(4) == 24);
	assert(tex0(10) == 3628800);
	assert(tex0(12) == 479001600);
	assert(tex0(-10) == 0);
	assert(tex0(0) == 1);
	printf("Tests Ex0 Passed!");
}

void	test_ex1(int (*tex1)(int))
{
	assert(tex1(1) == 1);
	assert(tex1(4) == 24);
	assert(tex1(10) == 3628800);
	assert(tex1(12) == 479001600);
	assert(tex1(-10) == 0);
	assert(tex1(0) == 1);
	printf("Tests ex1 Passed!");
}

void	test_ex2(int (*tex2)(int, int))
{
	assert(tex2(1, 1) == 1);
	assert(tex2(4, 4) == 256);
	assert(tex2(10, 7) == 10000000);
	assert(tex2(0, 4) == 0);
	assert(tex2(4, 0) == 1);
	// assert(tex2(-10, 0) == -1);
	assert(tex2(-4, 4) == 256);
	assert(tex2(-4, -4) == 0);
	assert(tex2(0, 0) == 1);
	printf("Tests Ex2 Passed!");
}

void	test_ex3(int (*tex3)(int, int))
{
	assert(tex3(1, 1) == 1);
	assert(tex3(4, 4) == 256);
	assert(tex3(10, 7) == 10000000);
	assert(tex3(0, 4) == 0);
	assert(tex3(4, 0) == 1);
	// assert(tex3(-10, 0) == -1);
	assert(tex3(-4, 4) == 256);
	assert(tex3(-4, -4) == 0);
	assert(tex3(0, 0) == 1);
	printf("Tests Ex3 Passed!");
}

void	test_ex4(int (*tex4)(int))
{
	assert(tex4(0) == 0);
	assert(tex4(1) == 1);
	assert(tex4(2) == 1);
	assert(tex4(3) == 2);
	assert(tex4(10) == 55);
	assert(tex4(15) == 610);
	assert(tex4(-3) == -1);
	assert(tex4(5) == 5);
	printf("Tests ex4 Passed!");
}

int	main(void)
{
	printf("\n\nft_iterative_factorial:\n");
	test_ex0(ft_iterative_factorial);

	printf("\n\nt_recursive_factorial:\n");
	test_ex1(ft_recursive_factorial);

	printf("\n\nt_recursive_power:\n");
	test_ex2(ft_iterative_power);

	printf("\n\nt_iterative_power:\n");
	test_ex3(ft_recursive_power);

	printf("\n\nt_fibonacci:\n");
	test_ex4(ft_fibonacci);
}
