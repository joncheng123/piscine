/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:23:05 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/02 15:37:15 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Source copy";
	char	dest[] = "Destination copy";
	unsigned int	n;	

	n = 2;
	printf("before\n: %s\n: %s\n", src, dest);
	strncpy (dest, src, n);
	printf("after\n: %s\n: %s\n", src, dest);
	return (0);
}
