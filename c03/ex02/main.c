/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:56:24 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/02 20:44:17 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char	dest[50] = "This is the best";
	char	src[] = "place ever";
	char	*i;

	i = ft_strcat(dest, src);

	printf("%s", i);
}
