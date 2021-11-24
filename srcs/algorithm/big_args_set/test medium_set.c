/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:38:21 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/23 18:07:11 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// #include <stdio.h>
// void    display_stack(t_data *data);

// void	split_and_push(t_data *data)
// {
// 	size_t		i;
// 	size_t		len;
// 	long int	median;
// 	t_list		*tmp;
// 	t_list		*tmp_b_next;

// 	i = 0;
// 	len = ft_lstsize(data->lst_a);
// 	median = find_median(data);
// 	while (i < len)
// 	{
// 		tmp = data->lst_a;
// 		if (tmp->content < median)
// 			push_b(data);
// 		else if (i < len - 1)
// 		{
// 			if (data->lst_b && data->lst_b->next != NULL) 
// 			{	
// 				tmp_b_next = data->lst_b->next;
// 				if (data->lst_b->content < tmp_b_next->content)
// 					rotate_both(data);
// 				else
// 					rotate_a(data);
// 			}
// 			else
// 				rotate_a(data);
// 		}
// 		i++;
// 	}
// }

// long int	find_biggest_number(t_data *data)
// {
// 	t_list		*tmp;
// 	long int	biggest_nb;

// 	tmp = data->lst_b;
// 	biggest_nb = tmp->content;
// 	while (tmp)
// 	{
// 		if (biggest_nb < tmp->content)
// 			biggest_nb = tmp->content;
// 		tmp = tmp->next;
// 	}
// 	return (biggest_nb);
// }

// void	sort_and_push_back(t_data *data)
// {
//     long int    biggest_nb;
//     t_list		*tmp;
	
//     while (ft_lstsize(data->lst_b))
//     {
//         biggest_nb = find_biggest_number(data);
//         tmp = data->lst_b;
//         if (tmp->content == biggest_nb)
//             push_a(data);
//         else
//             rotate_b(data);
//     }
// }

// void	sort_medium_set(t_data *data)
// {
//     size_t len;

//     len = ft_lstsize(data->lst_a);
//     while (len > 3)
//     {
//         split_and_push(data);
//         display_stack(data);
//         len = ft_lstsize(data->lst_a);
//     }
//     if (len > 2)
//         sort_3_args(data);
//     else
//         sort_2_args(data);
//     sort_and_push_back(data);
// }
