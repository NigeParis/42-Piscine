/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:29:00 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/13 17:16:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count <= nb / count)
	{
		if ((nb % count) == 0)
			return (0);
		count++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;
	int	nbr;
	int index;

	result = 0;
	nbr = 2147483647;
	index = -10;

	while (index <= nbr)
	{
		result = ft_is_prime(index);
		if (result)
			printf("\nresult nbr %d is prime number", index);

		index++;
	}
	return (0);
}*/
