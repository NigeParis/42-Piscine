/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:24:49 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 11:40:57 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_line_valid_left(int tab[], const char *combs[], int input[], int line)
{
	int	max_size;
	int	i;
	int	count;

	count = 0;
	max_size = 0;
	i = 0;
	while (i < 4)
	{
		if (combs[tab[line]][i] - '0' > max_size)
		{
			max_size = combs[tab[line]][i] - '0';
			count++;
		}
		i++;
	}
	return (count == input[8 + line]);
}

int	is_line_valid_right(int tab[], const char *combs[], int input[], int line)
{
	int	max_size;
	int	i;
	int	count;

	count = 0;
	max_size = 0;
	i = 3;
	while (i >= 0)
	{
		if (combs[tab[line]][i] - '0' > max_size)
		{
			max_size = combs[tab[line]][i] - '0';
			count++;
		}
		i--;
	}
	return (count == input[8 + line + 4]);
}

int	is_solved(int tab[], const char *combs[], int input[])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!is_line_valid_left(tab, combs, input, i)
			|| !is_line_valid_right(tab, combs, input, i))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!is_column_valid(tab, combs, i)
			|| !is_column_valid_up(tab, combs, input, i)
			|| !is_column_valid_down(tab, combs, input, i))
			return (0);
		i++;
	}
	return (1);
}

int	rush(const char *combs[], int input[])
{
	int	tab[4];
	int	i;

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	while (!is_solved(tab, combs, input))
	{
		i = 3;
		while (tab[i]++ == 23)
		{
			tab[i] = 0;
			i--;
			if (i < 0)
				return (0);
		}
	}
	print_line(combs[tab[0]]);
	print_line(combs[tab[1]]);
	print_line(combs[tab[2]]);
	print_line(combs[tab[3]]);
	return (1);
}
