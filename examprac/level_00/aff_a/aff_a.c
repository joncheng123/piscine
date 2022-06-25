/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:07:10 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/08 17:53:45 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv [1][i] != '\0')
		{	
			if (argv [1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('a');
	ft_putchar('\n');
	return (0);
}	
