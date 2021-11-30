/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:19:11 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 16:00:58 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define	CHECKER_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include "push_swap.h"

# ifndef BUFFER_SIZE
#  define	BUFFER_SIZE 42
# endif

// BONUS
int		checker(t_data *data);
int		read_instructions(t_data *data, char *tmp);
int		do_push(t_data *data, char *tmp);
int		do_swap(t_data *data, char *tmp);
int		do_rotate(t_data *data, char *tmp);
int		do_reverse_rotate(t_data *data, char *tmp);
// BONUS --- get_next_line
char	*get_next_line(int fd, t_data *data);
char	*ft_strjoin_GNL(char *s1, char *s2);
char	*ft_strchr_GNL(char *s, int c);
size_t	ft_strlen_GNL(const char *str);
// BONUS --- operations
void	push_a_bonus(t_data *data);
void	push_b_bonus(t_data *data);
void	reverse_rotate_a_bonus(t_data *data);
void	reverse_rotate_b_bonus(t_data *data);
void	reverse_rotate_both_bonus(t_data *data);
void	rotate_a_bonus(t_data *data);
void	rotate_b_bonus(t_data *data);
void	rotate_both_bonus(t_data *data);
void	swap_a_bonus(t_data *data);
void	swap_b_bonus(t_data *data);
void	swap_both_bonus(t_data *data);

#endif
