/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:59:37 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/24 07:58:12 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_strcpy(char *dest, char *src)
{
	int		count;
	int		len;
	char	*ptr;

	if (!*src)
		return (0);
	ptr = src;
	len = ft_strlen(ptr);
	count = 0;
	while (*src)
	{
		*dest = *src;
		count++;
		dest++;
		src++;
	}
		*dest = '\0';
	return (len - count);
}

char	*ft_strdup(char *src)
{
	char	*ptr_add;
	int		len;

	len = ft_strlen(src) + 1;
	ptr_add = (char *) malloc(len * sizeof(char));
	if (ptr_add == 0)
		return (NULL);
	if (ft_strcpy(ptr_add, src))
		return (NULL);
	return (ptr_add);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "wergdhduen*kkQQQQQQ";
	char	*ptr;
	
	printf("\nString to be copied: \"%s\" ", src);
	ptr = ft_strdup(src);
	printf("\nString : \"%s\", copied to the memory address %p\n", ptr, ptr);
	
	printf("\nString to be copied: \"%s\" ", src);
	ptr = strdup(src);
	printf("\nString : \"%s\", copied to the memory address %p\n", ptr, ptr);
	free(ptr);
	return(0);
}*/
