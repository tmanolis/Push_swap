/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:53:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 17:18:23 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_a(t_data *data)
{
	t_list	*tmp;

	if (data->lst_b)
	{
		tmp = data->lst_b;
		data->lst_b = data->lst_b->next;
		tmp->next = NULL;
		ft_lstadd_front(&data->lst_a, tmp);
	}
}

void	push_b(t_data *data)
{
	t_list	*tmp;

	if (data->lst_a)
	{
		tmp = data->lst_a;
		data->lst_a = data->lst_a->next;
		tmp->next = NULL;
		ft_lstadd_front(&data->lst_b, tmp);
	}
}
