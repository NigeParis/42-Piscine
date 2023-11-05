/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:37:04 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/10 09:34:25 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr = -2147483648;

	ft_putnbr(nbr);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-89);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(2147);
	ft_putchar('\n');
	return (0);
}*/
