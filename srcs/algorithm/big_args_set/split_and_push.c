/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_and_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/22 15:12:42 by tmanolis         ###   ########.fr       */
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

void	split_b_and_push(t_data *data, long int smallest_nb, long int biggest_nb)
{
	size_t		i;
	size_t		count_rb;
	size_t		len;
	long int	median;
	t_list		*tmp;

	i = 0;
	count_rb = 0;
	len = ft_lstsize(data->lst_b);
	median = find_median_b(data);
	if ((smallest_nb >= median) || (median >= biggest_nb))
		return;
	while (i < len)
	{
		tmp = data->lst_b;
		if (tmp->content <= median)
		{
			rotate_b(data);
			count_rb++;
		}
		else
			push_a(data);
		i++;
	}
	compensate_rotate(data, count_rb, &reverse_rotate_b);
	display_stack(data);
	split_and_push(data, median, biggest_nb);
	split_b_and_push(data, smallest_nb, (median));
}

void	split_and_push(t_data *data, long int smallest_nb, long int biggest_nb)
{
	size_t		i;
	size_t		count_ra;
	size_t		len;
	long int	median;
	t_list		*tmp;

	i = 0;
	count_ra = 0;
	len = ft_lstsize(data->lst_a);
	median = find_median(data);
	printf("median : %ld\n", median);
	printf("biggest nb : %ld\n", biggest_nb);
	if ((smallest_nb >= median) || (median >= biggest_nb))
	{
		printf("ICI\n");
		return;
	}
	while (i < len)
	{
		tmp = data->lst_a;
		if (tmp->content >= median)
		{
			rotate_a(data);
			count_ra++;
		}
		else
			push_b(data);
		i++;
	}
	compensate_rotate(data, count_ra, &reverse_rotate_a);
	display_stack(data);
	split_and_push(data, median, biggest_nb);
	split_b_and_push(data, smallest_nb, median);
}
