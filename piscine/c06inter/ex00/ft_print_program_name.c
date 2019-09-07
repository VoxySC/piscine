/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:55:27 by alpascal          #+#    #+#             */
/*   Updated: 2019/09/06 11:03:37 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int compt;

	(void)argc;
	compt = 0;
	while (argv[0][compt] != '\0')
	{
		write(1, &argv[0][compt], 1);
		compt++;
	}
	return (0);
}
