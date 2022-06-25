/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:53:17 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/08 14:47:33 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	res;
	int	n;

	c = 0;
	n = 1;
	res = 0;
	while ((str[c] <= 32))
	{
		c++;
	}
	if (str[c] == '-')
	{
		n = - 1;
		c++;
	}
	else if (str[c] == '+')
	{
		c++;
	}
	while (str[c] != '\0' && str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * n);
}
/*
int	main(void)
{
	char	str[] = "3 234cndns----+++2232";

	printf("%d\n", ft_atoi(str));
}*/	

