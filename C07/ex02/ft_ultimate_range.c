/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:15:34 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/17 15:47:27 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (!(*range))
		return (-1);
	while (i < size)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	if (i != size)
		return (-1);
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	min;
	int	max;
	int i;
	int	imax;
	int	sizeof_array;

	min = 5;
	max = 15;
	i = 0;
	imax = max - min;
	sizeof_array = ft_ultimate_range(&ptr, min, max);
	printf("\naddress : array = %p", ptr);
	printf("\nsize of the range : %d", sizeof_array);
	while (i < imax)
	{
		printf("\narray[%d] = %d",i, ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
