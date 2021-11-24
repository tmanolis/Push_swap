/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:47 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/24 14:10:50 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void    display_stack(t_data *data);

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
	int			key_index;
	long int    key_nbr;

	key_index = ft_lstsize(data->lst_a) / 4;
	while (ft_lstsize(data->lst_a) > key_index)
	{
		key_nbr = find_key_number(data, data->lst_a, key_index);
		// printf("key index : %d\n", key_index);
		// printf("key number : %ld\n", key_nbr);
		split_and_push(data, key_nbr);
	}
	sort_medium_set(data);
}
