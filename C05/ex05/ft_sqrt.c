/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:27:36 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/13 15:08:05 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		return (0);
	if (nb < 2)
		return (1);
	while ((count * count) < nb && count < 46340)
	{
		count++;
	}
	if (count * count == nb)
		return (count);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;
	
	result = 0;

	result = ft_sqrt(2147395600);
	printf("\n 2147395600  result : %d ", result);

	result = ft_sqrt(1640045925);
	printf("\n 16400445925 result : %d ", result);

	result = ft_sqrt(909022500);
	printf("\n 909022500 result : %d ", result);

	result = ft_sqrt(1222761024);
	printf("\n 1222761024 result : %d ", result);
	return(0);
}*/
