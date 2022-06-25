/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:05:08 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/08 22:04:12 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	maff_revalpha(void)
{
	char	even;
	char	odd;

	even = 'Y';
	odd = 'z';
	while (even >= 'A')
	{
		ft_putchar(odd);
		ft_putchar(even);
		even = even - 2;
		odd = odd - 2;
	}
	ft_putchar('\n');
}

int	main(void)
{
	maff_revalpha();
}

/*#include <unistd.h>

  int	main(void)
  {
  	write (1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return(0);
}*/
