/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_and_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 14:22:28 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

#include <stdio.h>
void	display_stack(t_data *data);

void	compensate_rotate(t_data *data, size_t count, void (*f)(t_data *))
{
	while (count)
	{
		f(data);
		count--;
	}
}

// void	split_and_push(t_data *data, int key_index, long int biggest_nb)
// {
// 	size_t		i;
// 	size_t		len;
// 	long int	key_nbr;
// 	t_list		*tmp;

// 	i = 0;
// 	len = ft_lstsize(data->lst_a);
// 	key_nbr = find_key_number(data, data->lst_a, key_index);
// 	while (i < len)
// 	{
// 		tmp = data->lst_a;
// 		if (tmp->content >= key_nbr)
// 			ra_or_rra(tmp->content, data);
// 		else
// 			push_b(data);
// 		i++;
// 	}
// 	display_stack(data);
// 	split_and_push(data, key_nbr, biggest_nb);
// }
