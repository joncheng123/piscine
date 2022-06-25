/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:36:55 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/05 18:47:47 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
			{
				return (n);
			}
			else if (n >= 46341)
			{
				return (0);
			}
			n++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
}*/
