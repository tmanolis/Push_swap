/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   devide_and_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/01 16:35:07 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_and_push(t_data *data, long int key_nbr, int key_index)
{
	int			wanted_len;
	t_list		*tmp;

	wanted_len = ft_lstsize(data->lst_b) + key_index;
	tmp = data->lst_a;
	while (ft_lstsize(data->lst_b) != wanted_len && ft_lstsize(data->lst_a) > 3)
	{
		if (tmp->content <= key_nbr)
		{
			while (data->lst_a->content != tmp->content)
				ra_or_rra(tmp->content, data);
			push_b(data);
			tmp = data->lst_a;
		}
		else
			tmp = tmp->next;
	}
}

void	sort_a(t_data *data)
{
	long int	smallest_nb;

	while (ft_lstsize(data->lst_a) > 3)
	{
		smallest_nb = find_smallest_number(data->lst_a);
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

	while (ft_lstsize(data->lst_b) > 1)
	{
		biggest_nb = find_biggest_number(data->lst_b);
		while (data->lst_b->content != biggest_nb)
			rb_or_rrb(biggest_nb, data);
		push_a(data);
	}
	push_a(data);
}
