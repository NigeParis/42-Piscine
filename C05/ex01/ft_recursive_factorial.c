/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:19:30 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/11 10:17:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int result;	

	result = ft_recursive_factorial(6);
	printf("\nResult : %d\n", result);


	return (0);
}*/
