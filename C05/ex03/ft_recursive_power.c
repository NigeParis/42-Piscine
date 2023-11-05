/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:47:06 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/11 10:15:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = 0;

	result  = ft_recursive_power(3, 8);
	
	printf("Power number is : %d", result);

	return (0);
}*/
