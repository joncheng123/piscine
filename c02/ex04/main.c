/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:44:11 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/31 21:31:22 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	lowercase[] = "myhome";
	char	notlower[] = "HSJDJSDJ";
	char	empty[] = "";
	
	int	i = ft_str_is_lowercase(notlower);

	printf("%d: %s\n", ft_str_is_lowercase(lowercase), lowercase);
	printf("%d: %s\n", i, notlower);
	printf("%d: %s\n", ft_str_is_lowercase(empty), empty);
}
