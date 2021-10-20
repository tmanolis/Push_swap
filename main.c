/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 17:24:04 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void f(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	t_data	data[1];
	
	init_struct(data, argc);
	if (argc == 1)
		return (0);
	else if (arg_isdigit(argc, argv) == FAILURE)
		return (write(2, "Error\n", 6));
	else if (fill_lst_a(argc, argv, data) == FAILURE)
	{
		free4yourlife(data);
		return (write(2, "Error : couldn't get the arguments\n", 35));
	}
	else if (check_duplicate(data) == FAILURE || check_int_value(data) == FAILURE)
	{
		free4yourlife(data);
		return (write(2, "Error\n", 6));
	}
	t_list *tmp;
	tmp = data->lst_a;
	printf("STACK A : ");
	while (tmp)
	{
		printf("%ld ", tmp->content);
		tmp = tmp->next;
	}
	printf("\nSTACK B : ");
	tmp = data->lst_b;
	while (tmp)
	{
		printf("%ld ", tmp->content);
		tmp = tmp->next;
	}
	free4yourlife(data);
	// atexit(f);
	return (0);
}
