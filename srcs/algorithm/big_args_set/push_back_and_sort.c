/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_and_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:07:48 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/02 18:17:41 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"
#include <stdio.h>

long int	find_biggest_number(t_data *data)
{
	t_list		*tmp;
	long int	biggest_nb;

	tmp = data->lst_b;
	biggest_nb = tmp->content;
	while (tmp)
	{
		if (biggest_nb < tmp->content)
			biggest_nb = tmp->content;
		tmp = tmp->next;
	}
	printf("big nb : %ld\n", biggest_nb);
	return (biggest_nb);
}

void	push_back_and_sort(t_data *data)
{
	find_biggest_number(data);
}