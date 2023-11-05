/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:13:44 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 18:20:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char 	string[] = "This is a string of 22";
	int 	result;

	result = ft_strlen(string);
	printf("the lenght of the string is : %d", result);
	return (0);
}*/
