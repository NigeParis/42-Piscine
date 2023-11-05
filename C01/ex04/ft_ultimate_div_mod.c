/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:03 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 09:05:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_temp_a;
	int	remainder_temp_b;

	division_temp_a = (*a / *b);
	remainder_temp_b = (*a % *b);
	*a = division_temp_a;
	*b = remainder_temp_b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 5;
	printf ("\n\nthe numbers are a : %d divided by b : %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("\n\nresults are division a : %d remainder b : %d\n\n", a, b);
	return (0);
}*/
