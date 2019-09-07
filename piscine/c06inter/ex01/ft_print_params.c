/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:06:19 by alpascal          #+#    #+#             */
/*   Updated: 2019/09/06 11:41:40 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int compt;

	i = 1;
	while (i < argc)
	{
		compt = 0;
		while (argv[i][compt] != '\0')
		{
			write(1, &argv[i][compt], 1);
			compt++;
		}
		write(1, "\n", 1);
		i++;
	}
}
