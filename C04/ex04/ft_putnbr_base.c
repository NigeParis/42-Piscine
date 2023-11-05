/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:14:28 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/05 17:20:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '+' || str[count] == '-')
			return (0);
		if (str[count] < 32 || str[count] > 126)
			return (0);
		count++;
	}
	if (count < 2)
		return (0);
	return (count);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_long_base(long int nbr, char *base)
{
	long int	base_len;

	if (ft_check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > base_len - 1)
	{
		ft_putnbr_long_base(nbr / base_len, base);
	}
	ft_putchar(base[(nbr % base_len)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = nbr;
	ft_putnbr_long_base(nb, base);
}
/*

//int	main(int argc, char *argv[])
int	main(void)
{
	char	base[] = "p";
//	argc = 1;


//	ft_putnbr_base(-170, argv[1]);
	ft_putnbr_base(-2147483648, base);
	ft_putchar('\n');
	ft_putnbr_base(2147, base);
	ft_putchar('\n');
	ft_putnbr_base(-2147483647, base);
	ft_putchar('\n');
	ft_putnbr_base(2147483647, base);
	ft_putchar('\n');
	ft_putnbr_base(-101, base);
	ft_putchar('\n');
	ft_putnbr_base(1, base);
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}*/
