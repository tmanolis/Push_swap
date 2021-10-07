/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:31:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/07 12:21:50 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SUCCESS 1
# define FAILURE 0

# include "./Libft/libft.h"
# include <unistd.h>

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
}				t_data;

// UTILS
int	convert_c_to_i(int argc, char **argv, t_data *data);

// CHECK_ERRORS
int	arg_isdigit(int argc, char **argv);
int	check_duplicate(t_data *data);

#endif