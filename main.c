/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/07 12:19:14 by tmanolis         ###   ########.fr       */
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
	convert_c_to_i(argc, argv, data);
	// if (check_duplicate(data))
	// 	return (write(2, "Error\n", 6));
}