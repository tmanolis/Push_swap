/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:59:16 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/26 17:12:07 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	switch_smallest_at_the_top_of_5(t_data *data)
{
	t_list	*smallest_nod;
	t_list	*second_nod;
	t_list	*third_nod;
	t_list	*fourth_nod;
	t_list	*last_nod;

	smallest_nod = find_smallest_nod(data);
	second_nod = data->lst_a->next;
	third_nod = second_nod->next;
	fourth_nod = third_nod->next;
	last_nod = fourth_nod->next;
	if (smallest_nod == second_nod)
		swap_a(data);
	if (smallest_nod == third_nod)
	{
		rotate_a(data);
		rotate_a(data);
	}
	if (smallest_nod == fourth_nod)
	{
		reverse_rotate_a(data);
		reverse_rotate_a(data);
	}
	if (smallest_nod == last_nod)
		reverse_rotate_a(data);
}

void	sort_5_args(t_data *data)
{
	switch_smallest_at_the_top_of_5(data);
	push_b(data);
	sort_4_args(data);
	push_a(data);
}
