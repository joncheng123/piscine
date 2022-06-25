/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:34:36 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/31 13:48:26 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char	*src);

int	main(void)
{
	char	source[] = "This is the source string";
	char	destin[] = "This is the destination string";
	char	*dest;

	printf("Before\n: %s\n: %s\n", source, destin);
	dest = ft_strcpy (destin, source);
	printf("After\n: %s\n: %s\n", source, dest);
	return (0);
}
