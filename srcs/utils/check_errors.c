/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:49:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 18:01:21 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	check_all_errors(t_data *data, int argc, char **argv)
{
	if (argc == 1)
		return (FAILURE);
	else if (arg_isdigit(argc, argv) == FAILURE)
	{
		write(2, "Error\n", 6);
		return (FAILURE);
	}
	else if (fill_lst_a(argc, argv, data) == FAILURE)
	{
		free4yourlife(data);
		write(2, "Error : couldn't get the arguments\n", 35);
		return (FAILURE);
	}
	else if (check_duplicate(data) == FAILURE
		|| check_int_value(data) == FAILURE)
	{
		free4yourlife(data);
		write(2, "Error\n", 6);
		return (FAILURE);
	}
	else
		return (SUCCESS);
}
