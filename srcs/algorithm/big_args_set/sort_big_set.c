/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:47 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/02 18:14:39 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void    display_stack(t_data *data);

void	sort_big_set(t_data *data)
{
    size_t len;

    len = ft_lstsize(data->lst_a);
    while (len > 3)
    {
        split_and_push(data);
        display_stack(data);
        len = ft_lstsize(data->lst_a);
    }
    if (len > 2)
        sort_3_args(data);
    else
        sort_2_args(data);
    push_back_and_sort(data);
}
