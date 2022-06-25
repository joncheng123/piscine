/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:15:42 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/04 13:16:29 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main (void)
{
	char	source[] = "This is the source string";
	char	destin[] = "This is the destination string";
	char	*dest;

	printf("Before\n: %s\n: %s\n", source, destin);
	dest = ft_strcpy (destin, source);
	printf("After\n: %s\n: %s\n", source, dest);
	return(0);
}*/
