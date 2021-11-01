/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:08:59 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/26 15:25:58 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_a(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	tmp->next = data->lst_a->next;
	data->lst_a->next = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	tmp->next = data->lst_b->next;
	data->lst_b->next = tmp;
	write(1, "sb\n", 3);
}

void	swap_both(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	tmp->next = data->lst_a->next;
	data->lst_a->next = tmp;
	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	tmp->next = data->lst_b->next;
	data->lst_b->next = tmp;
	write(1, "ss\n", 3);
}
