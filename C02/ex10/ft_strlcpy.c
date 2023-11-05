/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:43:14 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/20 13:09:52 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char src[] = "This is the string";
	char dest[100];
	int size_src = 0;

	printf("\nft_strlcpy string src   : %s", src);	
	size_src = ft_strlcpy(dest, src, 200);
	printf("\nft_strlcpy string size  : %d", size_src);	
	printf("\nft_strlcpy string dest  : %s\n", dest);	

	printf("\nstrlcpy string src      : %s", src);	
	size_src = strlcpy(dest, src, 200);
	printf("\nstrlcpy string size     : %d", size_src);	
	printf("\nstrlcpy string dest     : %s\n", dest);	



return (0);
}*/
