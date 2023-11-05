/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:11:15 by aidferna          #+#    #+#             */
/*   Updated: 2023/11/05 17:39:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_put_current_char(int x, int y, int row_nbr, int column_nbr);
void	ft_display_char(char *tab, int column_nbr, int x);

void	rush(int x, int y)
{
	int	row_nbr;
	int	column_nbr;

	row_nbr = 1;
	while (row_nbr <= y)
	{
		column_nbr = 1;
		while (column_nbr <= x)
		{
			ft_put_current_char(x, y, row_nbr, column_nbr);
			column_nbr++;
		}
		ft_putchar('\n');
		row_nbr++;
	}
}

void	ft_put_current_char(int x, int y, int row_nbr, int column_nbr)
{
	char	current_char[3];

	if (row_nbr == 1 || row_nbr == y)
	{
		current_char[0] = 'o';
		current_char[1] = '-';
		current_char[2] = 'o';
	}
	else
	{
		current_char[0] = '|';
		current_char[1] = ' ';
		current_char[2] = '|';
	}
	ft_display_char(current_char, column_nbr, x);
}

void	ft_display_char(char *current_char, int column_nbr, int x)
{
	if (column_nbr == 1)
		ft_putchar(current_char[0]);
	else if (column_nbr == x)
		ft_putchar(current_char[2]);
	else
		ft_putchar(current_char[1]);
}
