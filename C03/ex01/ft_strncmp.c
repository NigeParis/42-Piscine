/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:18:53 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/10 13:38:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (i < n - 1))
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    s1[] ="stringA";
    char    s2[] ="string";
    int        result = 0;

    printf("\n\nString 1 : %s",s1);
    printf("\n\nString 2 : %s\n",s2);
    result = ft_strncmp(s1, s2, 8);
    printf("\nResult =  %d\n\n",result);

    printf("\n\nFun_String 1 : %s",s1);
    printf("\n\nFun_String 2 : %s\n",s2);
    result = strncmp(s1, s2, 8);
    printf("\nFun_Result =  %d\n\n",result);

    return (0);
}*/
