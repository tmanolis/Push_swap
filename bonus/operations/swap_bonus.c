/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:08:59 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 15:20:36 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_a_bonus(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	tmp->next = data->lst_a->next;
	data->lst_a->next = tmp;
}

void	swap_b_bonus(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	tmp->next = data->lst_b->next;
	data->lst_b->next = tmp;
}

void	swap_both_bonus(t_data *data)
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
}
