/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:55:21 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 09:00:13 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>    */
/*#include <unistd.h>	*/
void	ft_swap(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
/*
int	main(void)
{
	int a = 33;
	int b = 99;

	printf("\n\nbefore a : %d  b : %d",a, b); 

	ft_swap(&a, &b);	

	printf("\n\nafter a : %d  b : %d\n\n",a, b); 

	return (0);
}
*/
