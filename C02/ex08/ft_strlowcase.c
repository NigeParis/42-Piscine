/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:14:14 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:13:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	int	flag;

	flag = 1;
	if (c < 'A' || c > 'Z')
		return (!flag);
	return (flag);
}

char	*ft_strlowcase(char *str)
{
	char	*return_pointer;

	return_pointer = str;
	while (*str)
	{
		if (ft_char_is_uppercase(*str))
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
	return (return_pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "bdjudEEEen1 234 (*&%$DDJNFJL,EL E,ELE";
	char *pointer_to_string;

	pointer_to_string = &string[0];
	printf("\n\nBefore : %s", string);
	pointer_to_string = ft_strlowcase(string);
	printf("\n\nResult : %s\n", string);
	return (0);
}*/
