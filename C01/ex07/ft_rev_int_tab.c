/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:30:58 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 15:54:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *nbr1, int *nbr2)
{
	int	tmp;

	tmp = *nbr1;
	*nbr1 = *nbr2;
	*nbr2 = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i -1]);
		i++;
	}
}
/*
int	main(void)
{
	int	valeur[] = {1,2,3,4,5,6,7,8};
	int i;
	
	printf("\n");
	for( i = 0; i < 8; i++) 	
		printf("%d", valeur[i]);
	printf("\n");
	ft_rev_int_tab(valeur, 8);
	
	for( i = 0; i < 8; i++) 	
		printf("%d", valeur[i]);
	printf("\n");
	return (0);
}*/
