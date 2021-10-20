/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:49:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/20 12:10:31 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	arg_isdigit(int argc, char **argv)
{
	int	i;
	int	character;

	i = 1;
	while (i < argc)
	{
		character = 0;
		if (argv[i][character] == '-' || argv[i][character] == '+')
			character++;
		while (argv[i][character] != '\0')
		{
			if (ft_isdigit(argv[i][character]) == FAILURE)
				return (FAILURE);
			character++;
		}
		i++;
	}
	return (SUCCESS);
}

int	check_duplicate(t_data *data)
{
	size_t		i;
	size_t		len;
	long int	arg;
	t_list		*tmp;
	t_list		*nod;

	i = 0;
	len = data->len;
	tmp = data->lst_a;
	nod = tmp;
	while (i < len)
	{
		arg = nod->content;
		tmp = nod;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			if (arg == tmp->content)
				return (FAILURE);
		}
		nod = nod->next;
		i++;
	}
	return (SUCCESS);
}

int	check_int_value(t_data *data)
{
	size_t		i;
	size_t		len;
	t_list		*tmp;

	i = 0;
	len = data->len;
	tmp = data->lst_a;
	while (i < len)
	{
		if ((tmp->content < INT_MIN) || (tmp->content > INT_MAX))
			return (FAILURE);
		tmp = tmp->next;
		i++;
	}
	return (SUCCESS);
}
