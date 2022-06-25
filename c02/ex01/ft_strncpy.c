/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:31:24 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/04 13:18:29 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest,	char *src,	unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main	(void)
{
	char	src[] = "abc";
	char	dest[] = "Destination copy";
	unsigned int n;

	n = 6;

	printf("before\n: %s\n: %s\n", src, dest);
	
	strncpy (dest, src, n);
	printf("after\n: %s\n: %s\n", src, dest);
	return (0);
}*/
