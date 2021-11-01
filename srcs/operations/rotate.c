/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:15:08 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 17:50:12 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_a(t_data *data)
{
	t_list	*tmp;
	t_list	*last_nod;

	tmp = data->lst_a;
	data->lst_a = data->lst_a->next;
	last_nod = ft_lstlast(data->lst_a);
	tmp->next = NULL;
	last_nod->next = tmp;
	write(1, "ra\n", 3);
}

void	rotate_b(t_data *data)
{
	t_list	*tmp;
	t_list	*last_nod;

	tmp = data->lst_b;
	data->lst_b = data->lst_b->next;
	last_nod = ft_lstlast(data->lst_b);
	tmp->next = NULL;
	last_nod->next = tmp;
	write(1, "rb\n", 3);
}

void	rotate_both(t_data *data)
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
	write(1, "rr\n", 3);
}
