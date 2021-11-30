/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:53:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 15:20:14 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_a_bonus(t_data *data)
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

void	push_b_bonus(t_data *data)
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
