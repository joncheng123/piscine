#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "this is good";
	int i;

	i = ft_strlen(str);
	printf("Length: %d", i);
}*/
