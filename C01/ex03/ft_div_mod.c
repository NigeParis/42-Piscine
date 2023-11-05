/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:36:42 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 09:02:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> */
/*#include <unistd.h>*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp;

	temp = (a % b);
	*div = (a / b);
	*mod = temp;
}
/*
int	main(void)
{
	int a = 33;
	int b = 5;
	int div = 0;
	int mod = 0;
	printf("\nbefore a : %d  b : %d  div : %d  mod : %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("\nafter a : %d  b : %d  div : %d  mod : %d\n", a, b, div, mod);

	return (0);
}*/
