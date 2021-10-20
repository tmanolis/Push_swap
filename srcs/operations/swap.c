/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:08:59 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 14:13:44 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

void	swap_a(t_data *data)
{
	t_list *tmp;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	tmp->next = data->lst_a->next;
	data->lst_a->next = tmp;
	
	// tmp = data->lst_a;
	// while (tmp)
	// {
	// 	printf("%ld\n", tmp->content);
	// 	tmp = tmp->next;
	// }
}

void	swap_b(t_data *data)
{
	t_list *tmp;

	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	tmp->next = data->lst_b->next;
	data->lst_b->next = tmp;	
}

void	swap_both(t_data *data)
{
	swap_a(data);
	swap_b(data);
}