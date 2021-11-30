/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:15:08 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 15:19:56 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate_a_bonus(t_data *data)
{
	t_list	*tmp;
	t_list	*last_nod;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	last_nod = ft_lstlast(data->lst_a);
	tmp->next = NULL;
	last_nod->next = tmp;
}

void	rotate_b_bonus(t_data *data)
{
	t_list	*tmp;
	t_list	*last_nod;

	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	last_nod = ft_lstlast(data->lst_b);
	tmp->next = NULL;
	last_nod->next = tmp;
}

void	rotate_both_bonus(t_data *data)
{
	t_list	*tmp;
	t_list	*last_nod;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	last_nod = ft_lstlast(data->lst_a);
	tmp->next = NULL;
	last_nod->next = tmp;
	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	last_nod = ft_lstlast(data->lst_b);
	tmp->next = NULL;
	last_nod->next = tmp;
}
