/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/05 18:40:02 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// if (argc == 1)
	// 	return (write(2, "Error", 5));
	// if (argv[2] == '\0')
	// 	return (-1);

int	main(int argc, char **argv)
{
	if (arg_isdigit(argc, argv) == FAILURE)
		return (write(2, "Error", 5)); 
}