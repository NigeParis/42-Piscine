/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:19:08 by nrobinso          #+#    #+#             */
/*   Updated: 2023/08/22 13:38:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS 0

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define TRUE 1
# define FALSE 0

#endif
