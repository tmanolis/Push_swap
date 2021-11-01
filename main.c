/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/28 19:28:32 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void f(void)
{
	system("leaks push_swap");
}

void    display_stack(t_data *data)
{
    int i;
	int	len;
    t_list *tmp;

    i = 1;
    tmp = data->lst_a;
	len = ft_lstsize(data->lst_a);
    printf("  |====== STACK A ======|\n");    
    printf("  |                     |\n");
    while (i <= len)
    {
		printf("       i: %d  No: %ld      \n", i, tmp->content);
       	i++;
		tmp = tmp->next;
    }
    printf("  |                     |\n");
    printf("  |=====================|\n\n\n");

	i = 1;
    tmp = data->lst_b;
	len = ft_lstsize(data->lst_b);
    printf("  |====== STACK B ======|\n");    
    printf("  |                     |\n");
    while (i <= len)
    {
		printf("       i: %d  No: %ld      \n", i, tmp->content);
       	i++;
		tmp = tmp->next;
    }
    printf("  |                     |\n");
    printf("  |=====================|\n");
}

int	main(int argc, char **argv)
{
	t_data	data[1];
	
	init_struct(data, argc);
	if (check_all_errors(data, argc, argv) == FAILURE)
		return (0);
	decide_what_to_do(data, argc);
	display_stack(data);
	free4yourlife(data);
	atexit(f);
	return (1);
}
