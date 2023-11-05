/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:29:29 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/13 13:08:01 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{

	int	result;
	int	i = 0;

	for(i = -2 ; i <= 7 ; i++)
	{
		result = ft_fibonacci(i);	
		printf("\nNumber is : %d", result);
		printf(",\n");
	}


	return (0);
}*/
