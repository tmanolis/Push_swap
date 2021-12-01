/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   devide_and_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/01 14:15:02 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void    display_stack(t_data *data);

void	split_and_push(t_data *data, long int key_nbr, int key_index)
{
	int			wanted_len;
	t_list		*tmp;
	t_list		*next_nod;

	wanted_len = ft_lstsize(data->lst_b) + key_index;
	tmp = data->lst_a;
	while (ft_lstsize(data->lst_b) != wanted_len && ft_lstsize(data->lst_a) > 3)
	{
		next_nod = data->lst_a->next;
		if (tmp->content <= key_nbr)
		{
			while (data->lst_a->content != tmp->content)
				ra_or_rra(tmp->content, data);
			push_b(data);
			tmp = data->lst_a;
		}
		// else if (next_nod->content <= key_nbr)
		// {
		// 	sa_or_ss(data);
		// 	push_b(data);
		// 	tmp = data->lst_a;
		// }
		else
			tmp = tmp->next;
	}
}

// int	start_by_the_top(t_data *data, long int key_nbr)
// {
// 	int i;
// 	int top;
// 	int bottom;

// 	i = 0;
// 	top = 0;
// 	bottom = 0;
// 	get_an_array(data, data->lst_a);
// 	// printf("key nbr : %ld\n", key_nbr);
// 	// printf("nb du tableau : %ld\n", data->array_tmp[i]);
// 	while (data->array_tmp[i] > key_nbr)
// 	{
// 		top++;
// 		i++;
// 	}
// 	i = ft_lstsize(data->lst_a) - 1;
// 	// printf("nb du tableau : %ld\n", data->array_tmp[i]);
// 	while (data->array_tmp[i] > key_nbr)
// 	{
// 		bottom++;
// 		i--;
// 	}
// 	// printf("top : %d\n", top);
// 	// printf("bottom : %d\n", bottom);
// 	if (top <= bottom)
// 		return (SUCCESS);
// 	else
// 		return (FAILURE);
// }

// void	split_and_push(t_data *data, long int key_nbr, int key_index)
// {
// 	int			wanted_len;

// 	wanted_len = ft_lstsize(data->lst_b) + key_index;
// 	while (ft_lstsize(data->lst_b) != wanted_len && ft_lstsize(data->lst_a) > 3)
// 	{
// 		if (start_by_the_top(data, key_nbr) == SUCCESS)
// 		{
// 			while (data->lst_a->content > key_nbr)
// 				rotate_a(data);
// 			push_b(data);
// 		}
// 		else
// 		{
// 			while (data->lst_a->content > key_nbr)
// 				reverse_rotate_a(data);
// 			push_b(data);
// 		}
// 	}
// }

void	sort_a(t_data *data)
{
	long int	smallest_nb;
	t_list		*next_nod;

	while (ft_lstsize(data->lst_a) > 3)
	{
		smallest_nb = find_smallest_number(data->lst_a);
		next_nod = data->lst_a->next;
		// if (smallest_nb == next_nod->content)
		// 	swap_a(data);
		while (data->lst_a->content != smallest_nb)
			ra_or_rra(smallest_nb, data);
		push_b(data);
	}
	sort_3_args(data);
}

long int	find_biggest_number(t_list *lst)
{
	t_list		*tmp;
	long int	biggest_nb;

	tmp = lst;
	biggest_nb = tmp->content;
	while (tmp)
	{
		if (biggest_nb < tmp->content)
			biggest_nb = tmp->content;
		tmp = tmp->next;
	}
	return (biggest_nb);
}

void	sort_b(t_data *data)
{
	long int	biggest_nb;
	t_list		*next_nod;

	while (ft_lstsize(data->lst_b) > 1)
	{
		biggest_nb = find_biggest_number(data->lst_b);
		next_nod = data->lst_b->next;
		// if (biggest_nb == next_nod->content)
		// 	swap_b(data);
		while (data->lst_b->content != biggest_nb)
			rb_or_rrb(biggest_nb, data);
		push_a(data);
	}
	push_a(data);
}
