/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/12 17:23:07 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data[1];
	
	if (argc == 1)
		return (0);
	else if (arg_isdigit(argc, argv) == FAILURE)
		return (write(2, "Error\n", 6));
	else if (fill_lst_a(argc, argv, data) == FAILURE)
		return (write(2, "Error : couldn't get the arguments\n", 35));
	// if (check_duplicate(data))
	// 	return (write(2, "Error\n", 6));
}