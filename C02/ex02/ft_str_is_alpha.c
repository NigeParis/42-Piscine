/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:02:52 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:15:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	if (*str == '\0')
		return (flag);
	while (*str)
	{
		if ((*str < 'a' || *str > 'z' ) && (*str < 'A' || *str > 'Z' ))
			return (!flag);
		str++;
	}
	return (flag);
}
/*
#include <stdio.h>

int	main(void)
{
	int		flag_result;
	char	string1[] = "thisA%BJKisa";
	char	string2[] = "thisABJKisa";

	if (ft_str_is_alpha(string1))
		printf("\n\n %s Only alphabetical characters !", string1);
	else
		printf("\n\n %s Is not only alphabetical characters !", string1);
	if (ft_str_is_alpha(string2))
		printf("\n\n %s  Only alphabetical characters !", string2);
	else
		printf("\n\n %s Is not only alphabetical characters !", string2);
	return (0);
}*/
