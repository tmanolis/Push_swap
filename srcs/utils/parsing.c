/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:54:12 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/28 18:19:17 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_args_not_sorted(t_data *data)
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

void	apply_algorithm(t_data *data, int argc)
{
	if (argc == 3)
		sort_2_args(data);
	if (argc == 4)
		sort_3_args(data);
	if (argc == 5)
		sort_4_args(data);
	if (argc == 6)
		sort_5_args(data);
	if (argc > 6)
		sort_more_than_5_args(data);
}

void	decide_what_to_do(t_data *data, int argc)
{
	if (check_args_not_sorted(data) == SUCCESS)
		apply_algorithm(data, argc);
	else
		write(1, "already sorted\n", 15);
}
