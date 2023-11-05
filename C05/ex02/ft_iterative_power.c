/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:53:27 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/13 13:03:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	loop;
	int	result;

	loop = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (loop <= power)
	{
		result *= nb;
		loop++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int result = 0;


	result = ft_iterative_power(4, 0);
	printf("result is = %d", result);



	return (0);
}*/
