/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:40 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 18:01:21 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	find_smallest_number(t_list *lst)
{
	t_list		*tmp;
	long int	smallest_nb;

	tmp = lst;
	smallest_nb = tmp->content;
	while (tmp)
	{
		if (smallest_nb > tmp->content)
			smallest_nb = tmp->content;
		tmp = tmp->next;
	}
	return (smallest_nb);
}

void	sort_10_args(t_data *data)
{
	size_t		i;
	long int	smallest_nb;
	t_list		*next_nod;

	i = 0;
	while (ft_lstsize(data->lst_a) > 3)
	{
		smallest_nb = find_smallest_number(data->lst_a);
		next_nod = data->lst_a->next;
		if (smallest_nb == next_nod->content)
			swap_a(data);
		while(data->lst_a->content != smallest_nb)
				ra_or_rra(smallest_nb, data);
		push_b(data);
	}
	sort_3_args(data);
	while (ft_lstsize(data->lst_b))
		push_a(data);
}
