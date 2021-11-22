/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:47 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/22 15:23:10 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

long int	find_smallest_number(t_data *data)
{
	t_list		*tmp;
	long int	smallest_nb;

	tmp = data->lst_a;
	smallest_nb = tmp->content;
	while (tmp)
	{
		if (smallest_nb > tmp->content)
			smallest_nb = tmp->content;
		tmp = tmp->next;
	}
	return (smallest_nb);
}

long int	find_biggest_number(t_data *data)
{
	t_list		*tmp;
	long int	biggest_nb;

	tmp = data->lst_a;
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
	long int	smallest_nb;
	long int    biggest_nb;

	smallest_nb = find_smallest_number(data);
	biggest_nb = find_biggest_number(data);
	split_and_push(data, smallest_nb, biggest_nb);
}
