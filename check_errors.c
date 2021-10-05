/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:49:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/05 18:37:56 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_isdigit(int argc, char **argv)
{
	int		i;
	int	character;

	i = 1;
	
	while (i <= argc)
	{
		character = 0;
		while (*argv[i] != '\0')
		{
			if (ft_isdigit(argv[i][character] == FAILURE))
				return (0);
			character++;
		}
		i++;
	}
	return (1);
}