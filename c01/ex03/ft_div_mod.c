/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 21:38:56 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/30 11:16:06 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	int	*div = &a;
	int	*mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("value of a is : %d\n", *div);
	printf("value of b is : %d", *mod);
}*/
