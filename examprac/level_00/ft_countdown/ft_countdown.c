/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:35:41 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/06 17:15:26 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_countdown(void)
{
	char	a;

	a = '9';
	while (a >= '0')
	{
		ft_putchar(a);
		a--;
	}
	ft_putchar('\n');
//	return (0);
}

int	main(void)
{
	char	a;

	ft_countdown();
//	return (0);
}
