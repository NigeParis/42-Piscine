/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:58:22 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/09 08:34:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		index;
	char	*pointer_dest;

	pointer_dest = dest;
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (pointer_dest);
}
/*
#include <stdio.h>

int	main(void)
{

	char src[] = "+coucou";
	char dest[100];
	char	*ptr;

	ptr = dest;

	printf("\nstring scr  : %s",src);
	printf("\n");

	ptr = ft_strcpy(dest, src);
	
	printf("\nstring dest : %s",dest);
	printf("\n");

	return (0);
}*/
