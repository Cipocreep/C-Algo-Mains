all: build-Tests-C-Algo

build-Tests-C-Algo:	main.c ../ex0/ft_iterative_factorial.c ../ex1/ft_recursive_factorial.c ../ex2/ft_iterative_power.c ../ex3/ft_recursive_power.c ../ex4/ft_fibonacci.c
	cc -Werror -Wall -Wextra $^ -o Tests-C-Algo
