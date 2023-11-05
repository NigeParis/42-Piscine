/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:19:10 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 19:25:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char *argv[])
{
	const char	*combs[] = {"1234", "1243", "1342", "1324", "1423", "1432",
		"2134", "2143", "2341", "2314", "2413", "2431", "3124", "3142", "3214",
		"3241", "3412", "3421", "4123", "4132", "4213", "4231", "4312", "4321"};
	int			input[SIZE_TAB];	
	int			i;
	int			tab_index;

	i = 0;
	tab_index = 0;
	if (argc != NBR_ARGS || is_good_string_len(&argv[1][0], SIZE_STRING))
		return (error());
	if (is_space_check(&argv[1][0]))
		return (error());
	if (is_valid_arg(&argv[1][0]))
		return (error());
	while (i < SIZE_STRING)
	{
		if (argv[1][i] != ' ')
			input[tab_index++] = (argv[1][i] - '0');
		i++;
	}
	if (rush(combs, input))
		return (0);
	return (error());
}
