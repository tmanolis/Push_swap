/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:20:13 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/26 16:12:27 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

t_list	*find_smallest_nod(t_data *data)
{
	t_list		*tmp;
	t_list		*smallest_nod;

	tmp = data->lst_a;
	smallest_nod = tmp;
	while (tmp)
	{
		if (smallest_nod->content > tmp->content)
			smallest_nod = tmp;
		tmp = tmp->next;
	}
	return (smallest_nod);
}

void	switch_smallest_at_the_top(t_data *data)
{
	t_list	*smallest_nod;
	t_list	*second_nod;
	t_list	*third_nod;
	t_list	*last_nod;

	smallest_nod = find_smallest_nod(data);
	second_nod = data->lst_a->next;
	third_nod = second_nod->next;
	last_nod = third_nod->next;
	if (smallest_nod == second_nod)
		swap_a(data);
	if (smallest_nod == third_nod)
	{
		reverse_rotate_a(data);
		reverse_rotate_a(data);
	}
	if (smallest_nod == last_nod)
		reverse_rotate_a(data);
}

void	sort_4_args(t_data *data)
{
	switch_smallest_at_the_top(data);
	push_b(data);
	sort_3_args(data);
	push_a(data);
}
