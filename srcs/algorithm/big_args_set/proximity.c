/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proximity.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:27:13 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/22 15:29:26 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int find_index(long int number, t_list *lst)
{
	int     index;
	t_list  *tmp;

	index = 0;
	tmp = lst;
	while (tmp)
	{
		if (tmp->content == number)
			return (index);
		tmp = tmp->next;
		index++;
	}
	return (index);
}

void	proximity(long int number, t_data *data)
{
	int	index;
	int	proximity;

	index = find_index(number, data->lst_a);
	proximity = (ft_lstsize(data->lst_a)) / 2;
	if (proximity > index)
		rotate_a(data);
	else
		reverse_rotate_a(data);
}
