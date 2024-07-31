/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaugarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:37:47 by xaugarte          #+#    #+#             */
/*   Updated: 2024/07/28 18:48:43 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	is_num_or_alpha(char c)
{
	return ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

char	*get_file_content(char *path)
{
	int		fd;
	char	*buff[692];
	int		count;
	ssize_t	bytes_read;

	*buff = malloc(692);
	count = 692;
	fd = open(path, O_RDONLY);
	bytes_read = read(fd, *buff, count);
	buff[bytes_read] = NULL;
	close(fd);
	return (*buff);
}

char	*get_key(char *str, char *key)
{
	int	i;

	i = 0;
	while (*str != ':')
	{
		if (is_num_or_alpha(*str))
		{
			key[i] = *str;
			i++;
		}
		str++;
	}
	key[i] = '\0';
	return (key);
}

char	*get_value(char *str, char *value)
{
	int	i;

	i = 0;
	while (*str != ':')
		str++;
	while (*str != '\n')
	{
		if (is_num_or_alpha(*str))
		{
			value[i] = *str;
			i++;
		}
		str++;
	}
	value[i] = '\0';
	return (value);
}
