/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:29:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:29:52 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	if (*str == '\0')
		return (flag);
	while (*str)
	{
		if (*str < '0' || *str > '9' )
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
	char	string1[] = "0123456789";
	char	string2[] = "12gdjwp=#$2356";

	if (ft_str_is_numeric(string1))
		printf("\n\n %s Only numeric characters !", string1);
	else
		printf("\n\n %s Is not only numeric characters !", string1);
	if (ft_str_is_numeric(string2))
		printf("\n\n %s  Only numeric characters !\n\n", string2);
	else
		printf("\n\n %s Is not only numeric characters !\n\n", string2);
	return (0);
}*/
