/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:47 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/25 14:42:15 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void    display_stack(t_data *data);

void	sort_big_set(t_data *data, int argc)
{
	int			key_index;
	long int	key_nbr;

	if (argc < 501)
		key_index = ft_lstsize(data->lst_a) / 5;
	else
		key_index = ft_lstsize(data->lst_a) / 13;
	while (ft_lstsize(data->lst_a) > key_index && ft_lstsize(data->lst_a) > 3)
	{
		key_nbr = find_key_number(data, data->lst_a, key_index);
		split_and_push(data, key_nbr, key_index);
	}
	sort_a(data);
	sort_b(data);
}
