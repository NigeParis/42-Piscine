/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:41:49 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/07 09:07:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	int	len;

	len = 0;
	len = ft_strlen("This string is so long : ");
	printf("This string is so long : %d", len);
	return (0);
}
*/
