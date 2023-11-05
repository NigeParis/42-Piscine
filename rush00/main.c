/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:55:53 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/11 08:27:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;

	if (argc < 3 || argc > 3)
		return (1);
	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[2]);
	rush(nbr1, nbr2);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		nbr = nbr + (*str - '0');
		nbr = nbr * 10;
		str++;
	}
	nbr = nbr / 10;
	return (nbr);
}
