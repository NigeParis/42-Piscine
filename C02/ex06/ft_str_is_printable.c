/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:29:46 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:45:33 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	if (*str == '\0')
		return (flag);
	while (*str)
	{
		if (*str < 32)
			return (!flag);
		str++;
	}	
	return (flag);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string1[] = "thisA%BJK\n\t\f\b";
	char	string2[] = "HDKELEDLEMEJEasghfjfi1234&*()  dfg";

	if (ft_str_is_printable(string1))
		printf("\n\n %s Only printable characters !", string1);
	else
		printf("\n %s Not printable characters !", string1);
	if (ft_str_is_printable(string2))
		printf("\nOnly printable characters ! %s ", string2);
	else
		printf("\nNot printable characters ! %s  ", string2);
	return (0);
}*/
