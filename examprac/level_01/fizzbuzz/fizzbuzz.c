/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:35:58 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/09 20:59:22 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
	{
		ft_write_number(number / 10);
	}
	write(1, &"0123456789"[number % 10], 1);
}

void	fizzbuzz(int number)
{

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (number % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (number % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_write_number(number);
		}
		write(1, "\n", 1);
		number++;
	}

}

int	main(void)
{
	int number;

	number = 33;
	fizzbuzz(number);
}
