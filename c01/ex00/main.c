/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:37:50 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/26 15:17:32 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	b;

	b = 42;
	int	*nbr;

	nbr = &b;
	printf("%d", b);
	return (0);
}