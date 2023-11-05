/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:20:15 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/14 08:01:57 by nrobinso         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	while (argc != 1)
	{
		argc --;
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}
