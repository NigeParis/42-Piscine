/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:04:21 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/14 15:46:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUFFER 1000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_swap(int *index1, int *index2)
{
	int	temp;

	temp = *index1;
	*index1 = *index2;
	*index2 = temp;
}

int	ft_strcmp( char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		if (*str1 == '\0' && *str2 == '\0')
		{
			str1--;
			str2--;
			break ;
		}
	}
	if (*str1 > *str2)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	index[BUFFER];
	int	i;
	int	j;

	j = 1;
	i = 0;
	while ((i++) != argc)
		index[i] = i;
	i = 1;
	while (i != argc)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[index[j]], argv[index[j + 1]]) > 0)
				ft_swap(&index[j], &index[j + 1]);
			j++;
		}
		i++;
		j = 1;
	}	
	i = 1;
	while (i < argc)
		ft_putstr(argv[index[i++]]);
	return (0);
}
