/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:40 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 14:26:43 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include <stdio.h>
void    display_stack(t_data *data);

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

	i = 0;
	while (ft_lstsize(data->lst_a) > 3)
	{
		smallest_nb = find_smallest_number(data->lst_a);
		while(data->lst_a->content != smallest_nb)
				ra_or_rra(smallest_nb, data);
		push_b(data);
	}
	display_stack(data);
	sort_3_args(data);
	while (ft_lstsize(data->lst_b))
		push_a(data);
}
