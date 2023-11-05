/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:36:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/17 11:53:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	if (j > size)
		return ((size + j) - 1);
	while (src[i] && i < size)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (j + i);
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* dest_ft = calloc('-', 1024);
    char* dest_libc = calloc('-', 1024);
    char* base_str = "&banane#";
    char* to_cat = "@pomme$";
    unsigned int res_libc = 0;
    unsigned int res_ft = 0;
    dest_ft[1023] = 0;
    dest_libc[1023] = 0;

    strcpy(dest_ft, base_str);
    strcpy(dest_libc, base_str);

    res_libc = strlcat(dest_libc, to_cat, 1024);
    res_ft  = ft_strlcat(dest_ft, to_cat, 1024);

    printf("libc: [%d]\t'%s'\n", res_libc ,dest_libc);
    printf(" ft : [%d]\t'%s'\n", res_ft, dest_ft);
    printf("=====TRUNC=====\n");
    dest_ft = calloc('-', 1024);
    dest_libc = calloc('-', 1024);
    dest_ft[1023] = 0;
    dest_libc[1023] = 0;
    strcpy(dest_ft, base_str);
    strcpy(dest_libc, base_str);

    res_libc = strlcat(dest_libc, to_cat, 5);
    res_ft = ft_strlcat(dest_ft, to_cat, 5);

    printf("libc: [%d]\t'%s'\n", res_libc ,dest_libc);
    printf(" ft : [%d]\t'%s'\n", res_ft, dest_ft);
}*/
