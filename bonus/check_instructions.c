/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:34:16 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 15:15:08 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	do_push(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b') && *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a')
			push_a_bonus(data);
		if (*(tmp + 1) == 'b')
			push_b_bonus(data);
		return (SUCCESS);
	}
	else
		return (FAILURE);
}

int	do_swap(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b' || *(tmp + 1) == 's') 
		&& *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a')
			swap_a_bonus(data);
		if (*(tmp + 1) == 'b')
			swap_b_bonus(data);
		if (*(tmp + 1) == 's')
			swap_both_bonus(data);
		return (SUCCESS);
	}
	else
		return (FAILURE);
}

int	do_rotate(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b' || *(tmp + 1) == 'r') 
		&& *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a')
			rotate_a_bonus(data);
		if (*(tmp + 1) == 'b')
			rotate_b_bonus(data);
		if (*(tmp + 1) == 'r')
			rotate_both_bonus(data);
		return (SUCCESS);
	}
	else
		return (FAILURE);
}

int	do_reverse_rotate(t_data *data, char *tmp)
{
	if ((*(tmp + 2) == 'a' || *(tmp + 2) == 'b' || *(tmp + 2) == 'r') 
		&& *(tmp + 3) == '\n')
	{
		if (*(tmp + 2) == 'a')
			reverse_rotate_a_bonus(data);
		if (*(tmp + 2) == 'b')
			reverse_rotate_b_bonus(data);
		if (*(tmp + 2) == 'r')
			reverse_rotate_both_bonus(data);
		return (SUCCESS);
	}
	else
		return (FAILURE);
}
