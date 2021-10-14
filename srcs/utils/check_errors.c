/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:49:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/14 18:06:42 by tmanolis         ###   ########.fr       */
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
		while (argv[i][character] != '\0')
		{
			if ((ft_isdigit(argv[i][character]) == FAILURE))
				return (0);
			character++;
		}
		i++;
	}
	return (1);
}

int	check_duplicate(t_data *data)
{
	size_t		i;
	size_t		size;
	long int	arg;
	t_list		*tmp;
	t_list		*nod;

	i = 0;
	size = ft_lstsize(data->lst_a);
	tmp = data->lst_a;
	nod = tmp;
	while (i < size)
	{
		arg = nod->content;
		tmp = data->lst_a;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			if (arg == tmp->content)
				return (0);
		}
		nod = nod->next;
		i++;
	}
	return (1);
}
