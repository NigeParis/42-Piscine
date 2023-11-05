/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:14:14 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:11:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	int	flag;

	flag = 1;
	if (c < 'a' || c > 'z')
		return (!flag);
	return (flag);
}

char	*ft_strupcase(char *str)
{
	char	*return_ptr;

	return_ptr = str;
	while (*str != '\0')
	{
		if (ft_char_is_lowercase(*str))
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (return_ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "bdjuden1 234 (*&%$DDlkemeosxlx";
	char *pointer_to_string;

	pointer_to_string = string;
	printf("\n\nBefore : %s", string);
	pointer_to_string = ft_strupcase(string);
	printf("\n\nResult : %s\n", string);
	return (0);
}*/
