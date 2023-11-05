/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:19:10 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 19:25:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_valid_arg(char *str)
{
	if (*str == ' ')
		return (1);
	while (*str)
	{	
		if (*str == ' ')
			str++;
		else
		{
			if (*str - '0' < RANGE_MIN || *str - '0' > RANGE_MAX)
				return (1);
			str++;
		}
	}
	return (0);
}

int	error(void)
{
	write (2, "Error\n", 6);
	return (1);
}

int	is_space_check(char *str)
{
	while (*str)
	{
		if (*str == ' ')
			if (*(str + 1) == ' ')
				return (1);
		str++;
	}
	return (0);
}

int	is_good_string_len(char *str, int len)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count - len);
}
