/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:24:35 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/28 21:04:18 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;

	i = 7;
	j = 3;
	int	*p = &i;
	int	*z = &j;

	ft_swap(p, z);
	printf("i should be 7 and it is : %u\n", *p);
	printf("j should be 3 and it is : %u\n", *z);
	return (0);
}
