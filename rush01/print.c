/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:47:07 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 11:40:21 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_line(const char *line)
{
	write(1, &line[0], 1);
	write(1, " ", 1);
	write(1, &line[1], 1);
	write(1, " ", 1);
	write(1, &line[2], 1);
	write(1, " ", 1);
	write(1, &line[3], 1);
	write(1, "\n", 1);
}