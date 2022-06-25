/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:58:01 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/05 22:50:35 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
			{
				ft_putchar('z');
				ft_putchar('\n');
				return(0);
			}
			i++;
		}
		ft_putchar('\n');
	}
	ft_putchar('z');
	ft_putchar('\n');
	return (0);
}*/

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	write(1, "z", 1);
	return (0);
}	
