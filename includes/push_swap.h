/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:31:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/02 14:31:30 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define SUCCESS 1
# define FAILURE 0

# include "../Libft/libft.h"
# include <unistd.h>
# include <limits.h>

typedef struct s_data
{
	t_list		*lst_a;
	t_list		*lst_b;
	size_t		len;
	long int	*array_tmp;
}				t_data;

// ALGORITHM --- sort_2_args
void		sort_2_args(t_data *data);
// ALGORITHM --- sort_3_args
void		sort_3_args(t_data *data);
// ALGORITHM --- sort_4_args
t_list		*find_smallest_nod(t_data *data);
void		sort_4_args(t_data *data);
// ALGORITHM --- sort_5_args
void		sort_5_args(t_data *data);
// ALGORITHM --- sort_medium_set
long int	find_smallest_number(t_list *lst);
void		sort_medium_set(t_data *data);
// ALGORITHM/BIG_ARGS_SET --- devide_and_sort
void		split_and_push(t_data *data, long int key_nbr, int key_index);
void		sort_a(t_data *data);
void		sort_b(t_data *data);
// ALGORITHM/BIG_ARGS_SET --- median_and_keynumber
void		get_an_array(t_data *data, t_list *lst);
long int	find_median(t_data *data, t_list *lst);
long int	find_key_number(t_data *data, t_list *lst, int key_index);
// ALGORITHM/BIG_ARGS_SET --- proximity
void		ra_or_rra(long int number, t_data *data);
void		rb_or_rrb(long int number, t_data *data);
void		sa_or_ss(t_data *data);
// ALGORITHM/BIG_ARGS_SET --- sort_big_set
void		sort_big_set(t_data *data, int argc);
// OPERATIONS --- push
void		push_a(t_data *data);
void		push_b(t_data *data);
// OPERATIONS --- reverse_rotate
void		reverse_rotate_a(t_data *data);
void		reverse_rotate_b(t_data *data);
void		reverse_rotate_both(t_data *data);
// OPERATIONS --- rotate
void		rotate_a(t_data *data);
void		rotate_b(t_data *data);
void		rotate_both(t_data *data);
// OPERATIONS --- swap
void		swap_a(t_data *data);
void		swap_b(t_data *data);
void		swap_both(t_data *data);
// UTILS --- check_error
int			check_all_errors(t_data *data, int argc, char **argv);
// UTILS --- get_args
int			fill_lst_a(int argc, char **argv, t_data *data);
// UTILS --- init_and_free
void		init_struct(t_data *data, int argc);
void		free4yourlife(t_data *data);
// UTILS --- parsing
int			check_args_not_sorted(t_data *data);
void		decide_what_to_do(t_data *data, int argc);

#endif