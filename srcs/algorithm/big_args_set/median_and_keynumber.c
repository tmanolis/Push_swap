/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median_and_keynumber.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:12:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/24 11:58:46 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

long int	find_median(t_data *data, t_list *lst)
{
	int			i;
	int			len;
	long int	median;
	t_list		*tmp;

	i = 0;
	len = ft_lstsize(lst);
	if (data->array_tmp)
		free(data->array_tmp);
	data->array_tmp = (long int *)malloc(sizeof(long int) * len);
	if (!data->array_tmp)
		return (0);
	tmp = lst;
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

long int	find_key_number(t_data *data, t_list *lst, int key_index)
{
	int			i;
	int			len;
	long int	key_nbr;
	t_list		*tmp;

	i = 0;
	len = ft_lstsize(lst);
	if (data->array_tmp)
		free(data->array_tmp);
	data->array_tmp = (long int *)malloc(sizeof(long int) * len);
	if (!data->array_tmp)
		return (0);
	tmp = lst;
	while (tmp && (i < len))
	{
		data->array_tmp[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	sort_array(data->array_tmp, len);
	key_nbr = data->array_tmp[key_index];
	return (key_nbr);
}

void get_an_array(t_data *data, t_list *lst)
{
	int			i;
	int			len;
	t_list		*tmp;

	i = 0;
	len = ft_lstsize(lst);
	if (data->array_tmp)
		free(data->array_tmp);
	data->array_tmp = (long int *)malloc(sizeof(long int) * len);
	if (!data->array_tmp)
		return ;
	tmp = lst;
	while (tmp && (i < len))
	{
		data->array_tmp[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
}