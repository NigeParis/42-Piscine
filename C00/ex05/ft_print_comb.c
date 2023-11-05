/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:35:46 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/17 13:53:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if ((x == '7') && (y == '8') && (z == '9'))
	{
		return ;
	}	
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8' )
		{
			while (z <= '9' )
			{
				ft_print_digits(x, y, z);
				z++;
			}
			y++;
			if (z == ':')
				z = y + 1;
		}
		x++;
		if (y == '9')
			y = x;
	}
}
/*
int	main(void)
{

	ft_print_comb();

	return (0);
}*/
