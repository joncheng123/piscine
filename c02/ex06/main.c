/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:03:11 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/01 22:45:28 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	printable[] = "2jsja(*)";
	char	nonprint[] = "gf\tgdfsgr\n";
	char	empty[] = "";

	int	i = ft_str_is_printable(nonprint);

	printf("%d\n: %s\n", ft_str_is_printable(printable), printable);
	printf("%d\n: %s\n", i, nonprint);
	printf("%d\n: %s\n", ft_str_is_printable(empty), empty);
}
