/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:00:02 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 15:33:03 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

void	reverse_rotate_a(t_data *data)
{
	size_t	i;
	size_t	len;
	t_list	*tmp;
	t_list	*last_nod;

	i = 1;
	len = data->len;
	tmp = data->lst_a;
	last_nod = ft_lstlast(data->lst_a);
	while (i < (len - 1))
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	last_nod->next = data->lst_a;
	data->lst_a = last_nod;

	// tmp = data->lst_a;
	// while (tmp)
	// {
	// 	printf("%ld\n", tmp->content);
	// 	tmp = tmp->next;
	// }
}

void	reverse_rotate_b(t_data *data)
{
	size_t	i;
	size_t	len;
	t_list	*tmp;
	t_list	*last_nod;

	i = 1;
	len = ft_lstsize(data->lst_b);
	tmp = data->lst_b;
	last_nod = ft_lstlast(data->lst_b);
	while (i < (len - 1))
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = NULL;
	last_nod->next = data->lst_b;
	data->lst_b = last_nod;
}

void	reverse_rotate_both(t_data *data)
{
	reverse_rotate_a(data);
	reverse_rotate_b(data);
}
