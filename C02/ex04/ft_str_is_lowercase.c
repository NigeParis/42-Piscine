/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:06:34 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:44:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	if (*str == '\0')
		return (flag);
	while (*str)
	{
		if (*str < 'a' || *str > 'z' )
			return (!flag);
		str++;
	}	
	return (flag);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string1[] = "thisA%BJKisa";
	char	string2[] = "thghfhfudiAAAememekeo";

	if (ft_str_is_lowercase(string1))
		printf("\n\n %s Only lowercase alphabetical characters !", string1);
	else
		printf("\n %s Not only lowercase alphabetical characters !", string1);
	if (ft_str_is_lowercase(string2))
		printf("\n %s  Only lowercase alphabetical characters !", string2);
	else
		printf("\n %s Not only lowercase alphabetical characters !", string2);
	return (0);
}*/
