/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:49:45 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 12:05:33 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long int	atol(const char *str)
{
	int			i;
	int			j;
	long int	value;

	i = 0;
	j = 1;
	value = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		value = value * 10 + (str[i] - 48);
		i++;
	}
	return (value * j);
}

int	fill_lst_a(int argc, char **argv, t_data *data)
{
	int			i;
	long int	content;
	t_list		*new;

	i = 1;
	while (i < argc)
	{
		content = atol(argv[i]);
		new = ft_lstnew(content);
		if (!new)
			return (FAILURE);
		ft_lstadd_back(&data->lst_a, new);
		i++;
	}
	return (SUCCESS);
}