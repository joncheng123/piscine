/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schow <schow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:05:57 by schow             #+#    #+#             */
/*   Updated: 2022/05/21 11:05:58 by schow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char c);
void	top_row(int x);
void	last_row(int x);
void	mid_row(int x);
void	check_row_and_write(int column, int row);

void	rush(int x, int y)

{
	if (x <= 0 || y <= 0)
	{
		printf("Invalid arguments, insert positive intergers greater than 0.\n");
	}
	else
	{	
		check_row_and_write(x, y);
	}
}

void	mid_row(int x)
{	
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x || counter == 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		counter--;
	}
}

void	top_row(int x)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar('A');
		}
		else if (counter == 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		counter--;
	}
}

void	last_row(int x)
{
	int	counter;

	counter = x;
	while (counter > 0)
	{
		if (counter == x)
		{
			ft_putchar('C');
		}
		else if (counter == 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		counter--;
	}
}

void	check_row_and_write(int column, int row)
{
	int	i;

	i = row;
	while (i > 0)
	{	
		if (i == row)
		{
			top_row(column);
		}
		else if (i == 1)
		{
			last_row(column);
		}
		else
		{
			mid_row(column);
		}
		i--;
		ft_putchar('\n');
	}
}
