/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:50:49 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/01 12:46:12 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_data	data[1];

	init_struct(data, argc);
	if (check_all_errors(data, argc, argv) == FAILURE)
		return (0);
	if (check_args_not_sorted(data) == SUCCESS)
		checker(data);
	free4yourlife(data);
	return (0);
}
