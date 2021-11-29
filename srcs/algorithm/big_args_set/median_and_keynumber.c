/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median_and_keynumber.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:12:04 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/29 15:48:12 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	get_an_array(t_data *data, t_list *lst)
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

long int	find_key_number(t_data *data, t_list *lst, int key_index)
{
	int			len;
	long int	key_nbr;

	len = ft_lstsize(lst);
	get_an_array(data, data->lst_a);
	sort_array(data->array_tmp, len);
	key_nbr = data->array_tmp[key_index];
	return (key_nbr);
}
