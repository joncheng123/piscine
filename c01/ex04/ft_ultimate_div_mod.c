/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:40:15 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/09 19:59:41 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	*a = &i;
	int	*b = &j;

	i = 10;
	j = 5;
	ft_ultimate_div_mod(a, b);
	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d", *b);
}*/
