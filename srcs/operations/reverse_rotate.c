/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:00:02 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 18:06:52 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*find_before_last_nod(t_list *lst)
{
	size_t	i;
	size_t	len;

	i = 1;
	len = ft_lstsize(lst);
	while (i < (len - 1))
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

void	reverse_rotate_a(t_data *data)
{
	t_list	*last_nod;
	t_list	*before_last_nod;

	last_nod = ft_lstlast(data->lst_a);
	before_last_nod = find_before_last_nod(data->lst_a);
	before_last_nod->next = NULL;
	last_nod->next = data->lst_a;
	data->lst_a = last_nod;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_data *data)
{
	t_list	*last_nod;
	t_list	*before_last_nod;

	last_nod = ft_lstlast(data->lst_b);
	before_last_nod = find_before_last_nod(data->lst_b);
	before_last_nod->next = NULL;
	last_nod->next = data->lst_b;
	data->lst_b = last_nod;
	write(1, "rrb\n", 4);
}

void	reverse_rotate_both(t_data *data)
{
	t_list	*last_nod;
	t_list	*before_last_nod;

	last_nod = ft_lstlast(data->lst_a);
	before_last_nod = find_before_last_nod(data->lst_a);
	before_last_nod->next = NULL;
	last_nod->next = data->lst_a;
	data->lst_a = last_nod;
	last_nod = ft_lstlast(data->lst_b);
	before_last_nod = find_before_last_nod(data->lst_b);
	before_last_nod->next = NULL;
	last_nod->next = data->lst_b;
	data->lst_b = last_nod;
	write(1, "rrr\n", 4);
}
