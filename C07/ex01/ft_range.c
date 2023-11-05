/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:16:06 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/15 09:14:27 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr_array;
	int	size;
	int	i;

	size = (max - min);
	i = 0;
	if (min >= max)
	{
		ptr_array = NULL;
		return (0);
	}
	ptr_array = (int *)malloc(size * sizeof(int));
	if (!ptr_array)
		return (0);
	while (i < size)
	{
		ptr_array[i] = min;
		min ++;
		i++;
	}
	return (ptr_array);
}
/*
#include <stdio.h>

int	main(void)
{
	int *ptr;
	int min = 8;
	int max = 25;
	int i = 0;
	int imax = max - min;
	
	ptr = ft_range(min, max);
	while (i < imax)
	{
		printf("Array[%d] = %d  at the address : %p\n", i, ptr[i], &ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/
