/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:55:30 by alpascal          #+#    #+#             */
/*   Updated: 2019/09/06 14:31:46 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int compt;

	compt = 0;
	while (s1[compt] != '\0' || s2[compt] != '\0')
	{
		if (s1[compt] != s2[compt])
			return (s1[compt] - s2[compt]);
		compt++;
	}
	return (0);
}

void	ft_sort_param_tab(char **tab, int size)
{
	int i;
	char temp;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = *tab[i];
			*tab[i] = *tab[i + 1];
			*tab[i + 1] = temp;
		}
		i++;
	}
	i = 0;
}

int	main(int argc, char **argv)
{
	int i;
	int compt;
	
	ft_sort_param_tab(argv, argc - 1);
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
	return(0);
}
