/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:34:16 by tmanolis          #+#    #+#             */
/*   Updated: 2021/12/01 11:41:51 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	do_push(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b') && *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a' && ft_lstsize(data->lst_b))
		{
			push_a_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 1) == 'b' && ft_lstsize(data->lst_a))
		{
			push_b_bonus(data);
			return (SUCCESS);
		}
		else
			return (FAILURE);
	}
	else
		return (FAILURE);
}

int	do_swap(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b' || *(tmp + 1) == 's')
		&& *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a' && ft_lstsize(data->lst_a) >= 2)
		{
			swap_a_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 1) == 'b' && ft_lstsize(data->lst_b) >= 2)
		{
			swap_b_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 1) == 's' && ft_lstsize(data->lst_a) >= 2
			&& ft_lstsize(data->lst_b) >= 2)
		{
			swap_both_bonus(data);
			return (SUCCESS);
		}
		else
			return (FAILURE);
	}
	else
		return (FAILURE);
}

int	do_rotate(t_data *data, char *tmp)
{
	if ((*(tmp + 1) == 'a' || *(tmp + 1) == 'b' || *(tmp + 1) == 'r')
		&& *(tmp + 2) == '\n')
	{
		if (*(tmp + 1) == 'a' && ft_lstsize(data->lst_a) >= 2)
		{
			rotate_a_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 1) == 'b' && ft_lstsize(data->lst_b) >= 2)
		{
			rotate_b_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 1) == 'r' && ft_lstsize(data->lst_a) >= 2
			&& ft_lstsize(data->lst_b) >= 2)
		{
			rotate_both_bonus(data);
			return (SUCCESS);
		}
		else
			return (FAILURE);
	}
	else
		return (FAILURE);
}

int	do_reverse_rotate(t_data *data, char *tmp)
{
	if ((*(tmp + 2) == 'a' || *(tmp + 2) == 'b' || *(tmp + 2) == 'r')
		&& *(tmp + 3) == '\n')
	{
		if (*(tmp + 2) == 'a' && ft_lstsize(data->lst_a) >= 2)
		{
			reverse_rotate_a_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 2) == 'b' && ft_lstsize(data->lst_b) >= 2)
		{
			reverse_rotate_b_bonus(data);
			return (SUCCESS);
		}
		else if (*(tmp + 2) == 'r' && ft_lstsize(data->lst_a) >= 2
			&& ft_lstsize(data->lst_b) >= 2)
		{
			reverse_rotate_both_bonus(data);
			return (SUCCESS);
		}
		else
			return (FAILURE);
	}
	else
		return (FAILURE);
}
