/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:29:05 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/20 16:37:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void	ft_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	is_alphalowercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = str;
	ft_lowercase(ptr);
	if (is_alphalowercase(&ptr[0]))
		ft_uppercase(&ptr[0]);
	while (ptr[i] != '\0')
	{
		if ((ptr[i] < '0' || ptr[i] > '9')
			&& (ptr[i] < 'A' || ptr[i] > 'Z')
			&& (ptr[i] < 'a' || ptr[i] > 'z'))
			ft_uppercase(&ptr[i + 1]);
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{

	char str[] = "sAlut,{co%tt tu vas ? 42mots qua*te-deux; cinNte+et+un\n";
	char *ptr;

	ptr = str;
	printf("%s",str);
	ptr = ft_strcapitalize(str);
	printf("%s",ptr);


	



	return (0);
}*/
