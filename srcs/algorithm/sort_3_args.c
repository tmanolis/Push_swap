/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:21:57 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/26 15:12:38 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>


t_list	*find_biggest_nod(t_data *data)
{
	t_list		*tmp;
	t_list		*biggest_nod;

	tmp = data->lst_a;
	biggest_nod = tmp;
	while (tmp)
	{
		if (biggest_nod->content < tmp->content)
			biggest_nod = tmp;
		tmp = tmp->next;
	}
	return (biggest_nod);
}

void	switch_biggest_in_the_end(t_data *data)
{
	t_list	*tmp;
	t_list	*biggest_nod;

	tmp = data->lst_a;
	biggest_nod = find_biggest_nod(data);
	if (biggest_nod == tmp)
		rotate_a(data);
	else if (biggest_nod == tmp->next)
	{
		swap_a(data);
		rotate_a(data);
	}
}

void	sort_3_args(t_data *data)
{
	t_list *first_nod;
	t_list *second_nod;

	switch_biggest_in_the_end(data);
	first_nod = data->lst_a;
	second_nod = data->lst_a->next;
	if (first_nod->content > second_nod->content)
		swap_a(data);
}
