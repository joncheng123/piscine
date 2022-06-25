/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:51:55 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/31 22:07:41 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	uppercase[] = "ASDHDJSJDJ";
	char	other[] = "hhdhshfhdh";
	char	empty[] = "";
	
	int	i = ft_str_is_uppercase(other);

	printf("%d: %s\n", ft_str_is_uppercase(uppercase), uppercase);
	printf("%d: %s\n", i, other);
	printf("%d: %s\n", ft_str_is_uppercase(empty), empty);
}
