/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:49:45 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/12 17:53:21 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

// int	ft_atol()

int	fill_lst_a(int argc, char **argv, t_data *data)
{
	int		i;
	int		content;
	t_list	*new;

	i = 1;
	while (i < argc)
	{
		content = ft_atoi(argv[i]); // ATTENTION : CODER ATOL
		new = ft_lstnew(content);
		if (!new)
			return (0);
		ft_lstadd_back(&data->lst_a, new);
		i++;
	}
	return (1);
}