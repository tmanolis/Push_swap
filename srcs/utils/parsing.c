/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:54:12 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/21 16:49:14 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

void	apply_algorithm(t_data *data)
{
	t_list	*tmp;

	tmp = data->lst_a;
	write(1, "OK\n", 3);
}

int		check_args_not_sorted(t_data *data)
{
	t_list		*tmp;
	long int	number;

	tmp = data->lst_a;
	number = tmp->content;
	tmp = tmp->next;
	while (tmp)
	{
		if (number > tmp->content)
			return (SUCCESS);
		number = tmp->content;
		tmp = tmp->next;
	}
	return (FAILURE);
}

void	decide_what_to_do(t_data *data)
{
	if (check_args_not_sorted(data) == SUCCESS)
		apply_algorithm(data);
	else
		write(1, "already sorted\n", 15);
}
