#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	i;
	int	j;

	i = 12;
	j = 24;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i should be 12 but is %d\n", *a);
	printf("j should be 24 but is %u\n", *b);
	return (0);
}*/
