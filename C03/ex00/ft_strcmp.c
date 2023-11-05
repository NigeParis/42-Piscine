/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:57:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:51:39 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{

	char s1[] = "ABJ";
	char s2[] = "ABC";
	int	result = 0;

	printf("\nS1 = %s", s1);
	printf("\nS2 = %s\n", s2);
	printf("\n");
	result = ft_strcmp(s1, s2);
	printf("Compare result = %d\n\n", result);
	return (0);
}*/
