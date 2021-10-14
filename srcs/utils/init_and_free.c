/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:41:35 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/12 17:49:31 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	init_struct(t_data *data)
{
	data->lst_a = NULL;
	data->lst_b = NULL;
}

void	free4yourlife(t_data *data)
{
	free(data->lst_a);
}