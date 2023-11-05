/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:20:39 by ledelbec          #+#    #+#             */
/*   Updated: 2023/08/13 19:25:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>

# define NBR_ARGS 2
# define RANGE_MIN 1
# define RANGE_MAX 4
# define SIZE_TAB 16
# define SIZE_STRING 31

int		is_valid_arg(char *str);
int		error(void);
int		is_space_check(char *str);
int		is_good_string_len(char *str, int Len);
int		rush(const char *combs[], int input[]);
void	print_line(const char *s);
int		is_column_valid(int tab[], const char *combs[], int column);
int		is_column_valid_up(int tab[], const char *combs[], int in[], int col);
int		is_column_valid_down(int tab[], const char *combs[], int in[], int col);

#endif
