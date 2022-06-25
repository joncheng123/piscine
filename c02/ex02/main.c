/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:51:19 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/31 20:22:58 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
	char first[] = "HelloWorld";
	
	char symbol[] = "$%^&^&%$";

	char empty[] = "";

	int i =	ft_str_is_alpha(symbol);

	printf(" %d\n: %s\n", ft_str_is_alpha(first), first);
	printf(" %d\n: %s\n", i, symbol);
	printf(" %d\n: %s\n", ft_str_is_alpha(empty), empty);
	return(0);
}
