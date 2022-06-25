/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:48 by joncheng          #+#    #+#             */
/*   Updated: 2022/05/31 20:30:53 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	numb[] = "019283728";
	char	mix[] = "worldsds";
	char	empty[] = "";

	int	i = ft_str_is_numeric(mix);

	printf("%d\n: %s\n", ft_str_is_numeric(numb), numb);
	printf("%d\n: %s\n", i, mix);
	printf("%d\n: %s\n", ft_str_is_numeric(empty), empty);
}
