/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:27:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/17 14:26:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *nbr1, int *nbr2)
{
	int	temp;

	temp = *nbr1;
	*nbr1 = *nbr2;
	*nbr2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	loop_counter;

	index = 0;
	loop_counter = 0;
	while (loop_counter != size)
	{
		while (index != size)
		{
			if (tab[index] > tab[index + 1])
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		index = 0;
		loop_counter++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr_array[] = {1, 'a', 22, 14, 'Z', 45, 66, 99, -77, -1};	
	int	i;

    printf("\narray numbers before :");
	for (i = 0; i < 10; i++)
	{
		printf("%d", nbr_array[i]);
		printf(", ");
	}
	printf("\n ");
	ft_sort_int_tab(nbr_array, 9);
    printf("\narray numbers after  :");
	for (i = 0; i < 10; i++)
	{
		printf("%d", nbr_array[i]);
		printf(", ");
	}
	printf("\n ");
	return (0);
}*/
