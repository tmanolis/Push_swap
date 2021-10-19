/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:41:35 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/19 17:37:36 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	init_struct(t_data *data, int argc)
{
	data->lst_a = NULL;
	data->lst_b = NULL;
	data->len = argc - 1;
}

void	free4yourlife(t_data *data)
{
	free(data->lst_a);
}