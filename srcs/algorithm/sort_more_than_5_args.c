/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more_than_5_args.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/28 19:51:29 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
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
	len = data->len;
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
	return (median);
}

void	sort_more_than_5_args(t_data *data)
{
	long int	median;

	median = find_median(data);
	printf("median : %ld\n", median);
}
