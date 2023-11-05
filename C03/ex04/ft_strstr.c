/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:34:09 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:17:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		pos;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		pos = 0;
		while (to_find[pos] && str[i + pos] && to_find[pos] == str[i + pos])
		{
			pos++;
		}
		if (to_find[pos] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	str[] ="bib bBag BUG bbbb+ BUG";
	char	to_find[] ="+ ";
	char	*result;

	result = str;

	printf("\nstring to find :'%s' in the string '%s'\n", str,to_find);
	result = ft_strstr(str, to_find);	
	printf("\nfound that     : '%s' ft_strstr in the string\n", result);

	printf("\nstring to find :  '%s' in the string '%s'\n", str,to_find);
	result = strstr(str, to_find);	
	printf("\nfound that     : '%s' strstr in the string\n", result);


	return (0);
}*/
