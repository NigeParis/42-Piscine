/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:31:13 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/17 13:28:50 by nrobinso         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*return_pointer;

	return_pointer = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (return_pointer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	int		len;
	char	*ptrs;

	i = 0;
	count = 0;
	if (size == 0)
		return (NULL);
	len = ((ft_strlen(sep) + 1) * (size - 1));
	while (i < size)
		count = count + ft_strlen(strs[i++] + 1);
	ptrs = (char *)malloc((count + 1 + len) * sizeof(char));
	ptrs[0] = 0;
	if (!(ptrs))
		return (malloc(1 * sizeof(char)));
	i = 0;
	while (i < size)
	{
		ptrs = ft_strcat(ptrs, strs[i++]);
		if (i < size - 1)
			ptrs = ft_strcat(ptrs, sep);
	}
	return (ptrs);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"offffffne", "two", "Three", "Four", "Tweleve"};
	char	sep[] = ":";
	char	*ptr;
	int		i;	

	i = 0;
	ptr = ft_strjoin(5, strs, sep);
	printf("result : %p", ptr);
	printf("\nresult : %s", ptr);
	free(ptr);
	return (0);
}*/

/*
#include <stdio.h>

int main(){
    char    *tab[] = {"salut","comment","ca","va","?"};
    char *r = ft_strjoin(5, tab, "//");
    printf("%s",r);
}*/
