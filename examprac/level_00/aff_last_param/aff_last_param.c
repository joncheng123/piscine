/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joncheng <joncheng@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:34:53 by joncheng          #+#    #+#             */
/*   Updated: 2022/06/06 14:08:34 by joncheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc > 1)
	{
		while (i < argc && i == argc - 1)
		{
			j = 0;
			while (argv [i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			i--;
		}
		write(1, "\n", 1);
//		return (0);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
