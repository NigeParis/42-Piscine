/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:49:35 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 14:39:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*return_pointer;

	return_pointer = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (return_pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[100] = "This is the dest string";
	char	scr[] = "_this is the scr string";
	char	*pointer_dest;

	pointer_dest = dest;

	printf("\n\nString dest before : %s", dest);

	pointer_dest =  ft_strcat(dest, scr);


	printf("\nString dest after  : %s\n\n", dest);
	return (0);
}*/
