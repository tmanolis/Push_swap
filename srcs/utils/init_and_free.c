/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:41:35 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/28 19:42:48 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	init_struct(t_data *data, int argc)
{
	data->lst_a = NULL;
	data->lst_b = NULL;
	data->len = argc - 1;
	data->array_tmp = NULL;
}

void	lstclear(t_list *lst)
{
	void	*tmp;
	void	*pt_initial;

	pt_initial = lst;
	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	pt_initial = NULL;
}

void	free4yourlife(t_data *data)
{
	lstclear(data->lst_a);
	lstclear(data->lst_b);
	free(data->array_tmp);
}
