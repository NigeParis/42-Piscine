/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:20:27 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:44:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	if (*str == '\0')
		return (flag);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z' )
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
	char	string2[] = "HDKELEDLEMEJE";

	if (ft_str_is_uppercase(string1))
		printf("\n\n %s Only uppercase alphabetical characters !", string1);
	else
		printf("\n %s Not only uppercase alphabetical characters !", string1);
	if (ft_str_is_uppercase(string2))
		printf("\n %s  Only uppercase alphabetical characters !", string2);
	else
		printf("\n %s Not only uppercase alphabetical characters !", string2);
	return (0);
}*/
