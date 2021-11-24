/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proximity.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:27:13 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/24 15:31:13 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	compensate_rotate(t_data *data, size_t count, void (*f)(t_data *))
{
	while (count)
	{
		f(data);
		count--;
	}
}

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

void	ra_or_rra(long int number, t_data *data)
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

void	rb_or_rrb(long int number, t_data *data)
{
	int	index;
	int	proximity;

	index = find_index(number, data->lst_b);
	proximity = (ft_lstsize(data->lst_b)) / 2;
	if (proximity > index)
		rotate_b(data);
	else
		reverse_rotate_b(data);
}
