/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_and_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 20:08:02 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void	display_stack(t_data *data);

void	compensate_rotate(t_data *data, size_t count, void (*f)(t_data *))
{
	while (count)
	{
		f(data);
		count--;
	}
}

void	split_and_push(t_data *data, long int key_nbr)
{
	size_t		i;
	size_t		len;
	t_list		*tmp;
	t_list		*next_nod;

	i = 0;
	len = ft_lstsize(data->lst_a);
	tmp = data->lst_a;
	while (i < len)
	{
		next_nod = tmp->next;
		if (next_nod->content <= key_nbr)
		{
			swap_a(data);
			push_b(data);
		}
		else if (tmp->content <= key_nbr)
		{
			while(data->lst_a->content != tmp->content)
				ra_or_rra(tmp->content, data);
			push_b(data);
		}
		tmp = data->lst_a;
		i++;
	}
	display_stack(data);
}
