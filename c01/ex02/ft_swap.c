/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:41:28 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/30 11:20:05 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*int main(void)
{
	int	i;
	int	j;

	i = 12;
	j = 23;

	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i should be 12 and it is : %u\n", *a);
	printf("j should be 23 and it is : %u", *b);
	return(0);
}*/
