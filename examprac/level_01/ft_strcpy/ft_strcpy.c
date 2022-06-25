#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int	main(void)
{
	char s2[] = "hello world";
	char s1[] = "this is good";
	char *dest;

	printf("Before\n: %s\n: %s\n", s1, s2);
	dest = ft_strcpy(s1, s2);
	printf("After\n: %s\n: %s\n", s1, dest);
	return (0);
}*/
