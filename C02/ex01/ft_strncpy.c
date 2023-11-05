/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:11:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 10:18:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	char			*return_pointer;

	return_pointer = dest;
	index = 0;
	while ((src[index]) && (index != n))
	{
		dest[index] = src[index];
		index++;
	}
	while (index != n)
	{
		dest[index] = '\0';
		index++;
	}
	return (return_pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	char 	src[] = "01234";
	char	dest[100];
	char	*ptr;
	int		n = 10;

	ptr = dest;
	printf("\n");
	printf("String 1 Source : %s", src);

	ptr = ft_strncpy(dest, src, n);

	printf("\n");
	printf("String 2 dest   : %s\n", dest);
	return (0);
}*/
