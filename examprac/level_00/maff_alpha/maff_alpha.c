/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:26:12 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/06 20:48:40 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	maff_alpha(void)
{
	char	even;
	char	odd;
	
	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		ft_putchar(odd);
		ft_putchar(even);
		even = even + 2;
		odd = odd + 2;
	}
	ft_putchar('\n');
}

int	main(void)
{
	maff_alpha();
}
