/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:27:54 by alpascal          #+#    #+#             */
/*   Updated: 2019/09/06 13:30:02 by alpascal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int compt;
	int val;

	val = nb;
	compt = nb - 1;
	if (nb < 1)
		return (0);
	while (compt > 1)
	{
		val = val * compt;
		compt--;
	}
	return (val);
}
