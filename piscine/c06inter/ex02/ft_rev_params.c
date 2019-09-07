/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:43:17 by alpascal          #+#    #+#             */
/*   Updated: 2019/09/06 11:54:30 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int compt;

	i = 0;
	while (argc - 1 - i > 0)
	{
		compt = 0;
		while (argv[argc - 1 - i][compt])
		{
			write(1, &argv[argc - 1 - i][compt], 1);
			compt++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
