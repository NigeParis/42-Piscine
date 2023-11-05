/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:44:13 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 18:07:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"
#include <stdio.h>

void	print_small(char *nb, char **dict)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dict[j] != 0)
	{
		if (found_key(nb, dict[j]))
		{
			print_line_value(dict[j]);
			return ;
		}
		j++;
	}
}

void	print_medium(char *nb, char **dict)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(nb) >= 3)
	{
		print_small(nb, dict);
		ft_putchar(' ');
	}
	while (nb[i])
	{
		j = 0;
		while (dict[j] != 0)
		{
			if (ft_atoi(&nb[i]) < 10 && ft_strlen(nb) > 3)
				print_line_value(dict[j]);
			else if (ft_atoi(&nb[i]) >= 100 \
				&& ft_strlen(&nb[i]) == nb_len_line(dict[j]))
				print_line_value(dict[j]);
			else if (nb[i] == dict[j][0] \
				&& ft_strlen(&nb[i]) == nb_len_line(dict[j]) && nb[i] != '0')
			{
				if (ft_atoi(&nb[i]) > 19)
					print_line_value(dict[j]);
				else if (ft_atoi(&nb[i]) < 20 && ft_atoi(&nb[i - 1]) > 19)
				{
					print_small(&nb[i], dict);
					break ;
				}
				else if (ft_atoi(&nb[i - 1]) < 10 && ft_atoi(&nb[i]) < 10)
					print_line_value(dict[j]);
			}
			j++;
		}
		if ((ft_atoi(&nb[i]) % 10 != 0 \
		&& ft_atoi(nb) < 100 && nb[i + 1] != '\0') \
		|| (ft_atoi(&nb[i]) % 100 > 20 && nb[i + 1] != '0') \
		&& ft_atoi(&nb[i]) < 100)
			ft_putchar('-');
		else if ((ft_atoi(&nb[i]) % 10 != 0 && ft_atoi(nb) > 99 \
				&& nb[i + 1] != '\0' && nb[i] != '0' \
				&& ft_atoi(&nb[i]) > 20) || (nb[i + 2] == '0' \
				&& nb[i + 1] != '0'))
			ft_putchar(' ');
		i++;
	}
}

void	parse_file(char *nb, char **dict)
{
	if ((ft_atoi(nb) >= 0 && ft_atoi(nb) < 21) || (ft_atoi(nb) % 10 == 0 \
		&& ft_atoi(nb) < 100))
		print_small(nb, dict);
	else if (ft_atoi(nb) < 1000)
		print_medium(nb, dict);
}
