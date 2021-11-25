/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   devide_and_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/25 12:14:22 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	split_and_push(t_data *data, long int key_nbr, int key_index)
{
	int			wanted_len;
	t_list		*tmp;
	t_list		*next_nod;

	wanted_len = ft_lstsize(data->lst_b) + key_index;
	tmp = data->lst_a;
	while (ft_lstsize(data->lst_b) != wanted_len && ft_lstsize(data->lst_a) > 3)
	{
		// printf("tmp content : %ld\n", tmp->content);
		next_nod = data->lst_a->next;
		// printf("next content : %ld\n", next_nod->content);
		if (tmp->content <= key_nbr)
		{
			while(data->lst_a->content != tmp->content)
				ra_or_rra(tmp->content, data);
			push_b(data);
			tmp = data->lst_a;
		}
		else if (next_nod->content <= key_nbr)
		{
			swap_a(data);
			tmp = next_nod->next;
			push_b(data);
		}
		else
			tmp = tmp->next;
	}
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
	size_t		count;
	long int	biggest_nb;
	t_list		*next_nod;

	while (ft_lstsize(data->lst_b) > 1)
	{
		count = 0;
		biggest_nb = find_biggest_number(data->lst_b);
		next_nod = data->lst_b->next;
		if (biggest_nb == next_nod->content)
			swap_b(data);
		while(data->lst_b->content != biggest_nb)
			rb_or_rrb(biggest_nb, data);
		push_a(data);
	}
	push_a(data);
}

// void	sort_b(t_data *data)
// {
// 	size_t		count;
// 	long int	biggest_nb;
// 	t_list		*next_nod;

// 	while (ft_lstsize(data->lst_b) > 1)
// 	{
// 		count = 0;
// 		biggest_nb = find_biggest_number(data->lst_b);
// 		next_nod = data->lst_b->next;
// 		if (biggest_nb == next_nod->content)
// 			swap_b(data);
// 		while(data->lst_b->content != biggest_nb)
// 		{
// 				rotate_b(data);
// 				count ++;
// 		}
// 		push_a(data);
// 		if (count && (ft_lstsize(data->lst_b) > 2))
// 			compensate_rotate(data, count, &reverse_rotate_b);
// 	}
// 	push_a(data);
// }