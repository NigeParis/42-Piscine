/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:20:31 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 15:49:39 by nrobinso         ###   ########.fr       */
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
/*
int main(void)
{

	ft_putstr("This is my string");

	return (0);
}*/
