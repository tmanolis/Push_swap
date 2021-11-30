/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:50:49 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 19:35:03 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_data	data[1];

	init_struct(data, argc);
	if (check_all_errors(data, argc, argv) == FAILURE)
		return (0);
	checker(data);
	free4yourlife(data);
	return (0);
}
