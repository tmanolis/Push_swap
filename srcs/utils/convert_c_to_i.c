/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c_to_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:49:45 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/11 17:34:41 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

// int	convert_c_to_i(int argc, char **argv, t_data *data)
// {
// 	int	i;
// 	int	index_stack;
// 	int number;

// 	data->stack_a = (int *)malloc(sizeof(int) * (argc - 1));
// 	if (!data->stack_a)
// 		return (FAILURE);
// 	i = 1;
// 	index_stack = 0;
// 	while (i < argc)
// 	{
// 		number = ft_atoi(argv[i]);
// 		// penser a gerer la condition erreur si atoi reussi pas car int max ou min
// 		data->stack_a[index_stack] = number;
// 		i++;
// 		index_stack++;
// 		printf("number : %d\n", data->stack_a[index_stack]);
// 	}
// 	return (1);
// }