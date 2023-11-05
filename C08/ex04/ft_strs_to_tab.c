/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:28:40 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/23 18:38:29 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	while (av[i] && i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
/*
#include <stdio.h>
int    main()
{
    char    *str_array[5] = {"Salut", "Bonjour", "Douglas", "Test", 
"Comment allez-vous ? Moi ca va."};
    t_stock_str *struct_array = ft_strs_to_tab(5, str_array);
    for (int i = 0; i < 5; i++){
        printf("struct_array[%d] :\n", i);
        printf("   size : %d\n   str  : %s\n   copy : %s\n\n", 
struct_array[i].size, struct_array[i].str, struct_array[i].copy);
    }
}*/
