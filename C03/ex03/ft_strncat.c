/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:07:02 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:01:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	char			*return_pointer;

	return_pointer = dest;
	count = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != '\0') && (count < nb))
	{
		*dest = *src;
		src++;
		dest++;
		count++;
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
	int	size = 7;

	pointer_dest = dest;

	printf("\n\nString dest before : %s", dest);

	pointer_dest =  ft_strncat(dest, scr, size);


	printf("\nString dest after  : %s\n\n", dest);
	return (0);
}*/
