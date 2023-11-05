/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:50:10 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/11 08:51:25 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	loop;
	int	temp;

	result = 1;
	loop = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (loop < nb)
	{
		temp = result * (loop + 1);
		result = temp;
		loop++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int nbr = -4;
	int	result;
	result = ft_iterative_factorial(nbr);
	printf("Number factorial iterative is : %d", result);
	return (0);
}
*/
