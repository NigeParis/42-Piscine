/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:43:42 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/22 13:07:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toggle(char c)
{
	if (c == '-')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	neg_toggle;

	i = 0;
	neg_toggle = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (toggle(str[i]))
			neg_toggle *= -1;
		i++;
	}
	if (is_numeric(str[i]))
	{
		while (is_numeric(str[i]))
		{
			nbr = (nbr * 10) + (str[i] - '0');
			i++;
		}
		return (nbr * neg_toggle);
	}
	return (0);
}
/*
#include <stdio.h>

//int	main(int argc, char *argv[])
int	main(void)
{
	char str[] = "  \t\f\r\f\n\v  ------+1234";
	int result = 0;
//	argc = 1;

	printf("\n\nnumber to convert %s\n", str);
//	printf("\n\nnumber to convert %s\n", argv[1]);

	result = ft_atoi(str);
//	result = ft_atoi(argv[1]);

	printf("\n\nnumber converted  %d\n", result);


	return (0);
}*/
