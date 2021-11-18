/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_and_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/18 19:12:20 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"
#include <stdio.h>

void	sort_array(long int *array, int len)
{
	int			i;
	int			j;
	long int	tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

long int	find_median(t_data *data)
{
	int			i;
	int			len;
	long int	median;
	t_list		*tmp;

	i = 0;
	len = ft_lstsize(data->lst_a);
	if (data->array_tmp)
		free(data->array_tmp);
	data->array_tmp = (long int *)malloc(sizeof(long int) * len);
	if (!data->array_tmp)
		return (0);
	tmp = data->lst_a;
	while (tmp && (i < len))
	{
		data->array_tmp[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	sort_array(data->array_tmp, len);
	if (!(len % 2))
		len++;
	median = data->array_tmp[len / 2];
	// printf("median : %ld\n", median);
	return (median);
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
	if (smallest_nb >= biggest_nb)
		return;
	while (i < len)
	{
		tmp = data->lst_a;
		if (tmp->content > median)
		{
			rotate_a(data);
			count_ra++;
		}
		else
			push_b(data);
		i++;
	}
	split_and_push(data, (median + 1), biggest_nb);
}
