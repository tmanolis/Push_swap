/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:19:16 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/01 12:31:01 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

#include <stdio.h>

int	read_instructions(t_data *data, char *tmp)
{
	if (*tmp == 'p')
		return (do_push(data, tmp));
	if (*tmp == 's')
		return (do_swap(data, tmp));
	if (*tmp == 'r' && *(tmp + 1) != 'r')
		return (do_rotate(data, tmp));
	if (*tmp == 'r' && *(tmp + 1) == 'r')
		return (do_reverse_rotate(data, tmp));
	else
		return (FAILURE);
}

int	checker(t_data *data)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char));
	while (tmp)
	{
		free(tmp);
		tmp = get_next_line(0, data);
	}
	free(tmp);
	if (check_args_not_sorted(data) == FAILURE && !ft_lstsize(data->lst_b))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (SUCCESS);
}
