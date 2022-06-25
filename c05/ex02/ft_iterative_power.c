/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:12:40 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/05 18:45:45 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		res = res * (nb);
		power--;
	}
	return (res);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
int main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
}*/
