/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:09:38 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 11:35:56 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>

int	is_column_valid(int tab[], const char *combs[], int column)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (combs[tab[i]][column] == combs[tab[j]][column])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_column_valid_up(int tab[], const char *combs[], int input[], int column)
{
	int	max_size;
	int	i;
	int	count;

	count = 0;
	max_size = 0;
	i = 0;
	while (i < 4)
	{
		if (combs[tab[i]][column] - '0' > max_size)
		{
			max_size = combs[tab[i]][column] - '0';
			count++;
		}
		i++;
	}
	return (count == input[column]);
}

int	is_column_valid_down(int tab[], const char *combs[], int input[], int col)
{
	int	max_size;
	int	i;
	int	count;

	count = 0;
	max_size = 0;
	i = 3;
	while (i >= 0)
	{
		if (combs[tab[i]][col] - '0' > max_size)
		{
			max_size = combs[tab[i]][col] - '0';
			count++;
		}
		i--;
	}
	return (count == input[col + 4]);
}
