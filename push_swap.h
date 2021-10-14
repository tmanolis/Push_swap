/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:31:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/12 17:25:06 by tmanolis         ###   ########.fr       */
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
	t_list	*lst_a;
	t_list	*lst_b;
}				t_data;

// UTILS --- check_error
int		arg_isdigit(int argc, char **argv);
int		check_duplicate(t_data *data);
// UTILS --- get_args
int		fill_lst_a(int argc, char **argv, t_data *data);
// UTILS --- init_and_free
void	init_struct(t_data *data);
void	free4yourlife(t_data *data);

#endif