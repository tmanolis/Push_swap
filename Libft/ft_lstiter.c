/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:38:00 by tmanolis          #+#    #+#             */
/*   Updated: 2021/10/12 17:40:17 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(long int))
{
	if (lst && f)
	{
		while (lst != NULL)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
}
