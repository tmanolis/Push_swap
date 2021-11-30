/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:33:02 by tmanolis          #+#    #+#             */
/*   Updated: 2021/11/30 15:59:05 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*copy_until_EOL(char *stock)
{
	int		i;
	int		len;
	char	*line;

	i = 0;
	while (stock[i] != '\n' && stock[i] != '\0')
	{
		i++;
	}
	len = i + 1;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = stock[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

void	get_the_spare(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf[i] != '\n')
		i++;
	i = i + 1;
	while (i < BUFFER_SIZE)
	{
		buf[j] = buf[i];
		j++;
		i++;
	}
	buf[j] = '\0';
}

char	*get_next_line_2(size_t ret, char *stock, char *buf, t_data *data)
{
	char	*line;

	line = NULL;
	if (*stock == '\0')
	{
		free(stock);
		return (NULL);
	}
	if (ret > 0)
	{
		line = copy_until_EOL(stock);
		free(stock);
		get_the_spare(buf);
	}
	else
	{
		line = copy_until_EOL(stock);
		free(stock);
	}
	if (read_instructions(data, line) == FAILURE)
	{
		ft_putstr_fd("Error\n", 2);
		return (FAILURE);
	}
	return (line);
}

char	*get_next_line(int fd, t_data *data)
{
	size_t		ret;
	char		*stock;
	static char	buf[BUFFER_SIZE + 1];

	if (BUFFER_SIZE <= 0 || read(fd, buf, 0) == -1)
		return (NULL);
	stock = NULL;
	stock = ft_strjoin_GNL(stock, buf);
	ret = 1;
	while (ret > 0 && ft_strchr_GNL(stock, '\n') == 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
		{
			free(stock);
			return (NULL);
		}
		buf[ret] = '\0';
		stock = ft_strjoin_GNL(stock, buf);
	}
	return (get_next_line_2(ret, stock, buf, data));
}
