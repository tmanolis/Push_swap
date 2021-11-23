/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:47 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 14:20:06 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

long int	find_biggest_number(t_list *lst)
{
	t_list		*tmp;
	long int	biggest_nb;

	tmp = lst;
	biggest_nb = tmp->content;
	while (tmp)
	{
		if (biggest_nb < tmp->content)
			biggest_nb = tmp->content;
		tmp = tmp->next;
	}
	return (biggest_nb);
}

void	sort_big_set(t_data *data)
{
	long int    biggest_nb;

	biggest_nb = find_biggest_number(data->lst_a);
	// split_and_push(data, smallest_nb, biggest_nb);
}
