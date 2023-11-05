/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:24:32 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/21 09:44:14 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		ft_putchar(c);
		str++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	const char	strhex[] = "0123456789abcdef";

	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putstr("\\");
			ft_putchar(*str / 16 + '0');
			ft_putchar(strhex[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr(str);
	ft_putstr("\n");

	ft_putstr_non_printable(str);
return (0);
}*/
