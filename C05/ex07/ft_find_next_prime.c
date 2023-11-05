/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:29:00 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/22 19:08:11 by nrobinso         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{	
	int	result;

	result = 0;
	if (ft_is_prime(nb))
		return (nb);
	while (result == 0)
	{
		nb++;
		result = ft_is_prime(nb);
		if (result)
		{
			return (nb);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	result;
	int	nbr;
	
	argc = 1;
	result = 0;
	nbr = atoi (argv[1]);

	result = ft_find_next_prime(nbr);
	if (result)
		printf("\n next prime of %d is %d\n", nbr, result);
	return (0);
}*/
