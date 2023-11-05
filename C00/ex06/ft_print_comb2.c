/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:48:55 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:08:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_show_counter(int double_digits)
{
	int	digit_left;
	int	digit_right;

	if (double_digits > 9)
	{
		digit_left = (double_digits / 10) + '0';
		digit_right = (double_digits % 10) + '0';
	}
	else
	{
		digit_left = '0';
		digit_right = (double_digits % 10) + '0';
	}
	ft_putchar(digit_left);
	ft_putchar(digit_right);
}

void	ft_print_comb2(void)
{
	int	digits_left;
	int	digits_right;

	digits_left = 0;
	digits_right = 1;
	while (digits_left <= 98)
	{
		while (digits_right <= 99)
		{
			ft_show_counter(digits_left);
			ft_putchar(' ');
			ft_show_counter(digits_right);
			if ((digits_left == 98) && (digits_right == 99))
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			digits_right++;
		}
		digits_left++;
		digits_right = digits_left + 1;
	}
}
/*
int  main(void)
{

	ft_print_comb2();

	return (0);
}*/
