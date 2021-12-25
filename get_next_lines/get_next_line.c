/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 08:23:37 by arharif           #+#    #+#             */
/*   Updated: 2021/12/19 08:23:52 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *dest)
{
	int		bytes_read;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(dest, '\n') && bytes_read)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes_read] = '\0';
		dest = ft_strjoin(dest, buff);
	}
	free(buff);
	return (dest);
}

char	*ft_line(char *dest)
{
	char	*tmp;
	int		idx;

	if (!dest || !dest[0])
		return (NULL);
	idx = 0;
	while (dest[idx] != '\n' && dest[idx])
		idx++;
	tmp = malloc(sizeof(char) * (idx + 2));
	if (tmp == NULL)
		return (NULL);
	idx = 0;
	while (dest[idx] != '\n' && dest[idx])
	{
		tmp[idx] = dest[idx];
		idx++;
	}
	if (dest[idx] == '\n')
		tmp[idx++] = '\n';
	tmp[idx] = '\0';
	return (tmp);
}

char	*ft_next_line(char *dest)
{
	int		new_idx;
	int		idx;
	char	*new_dest;

	idx = 0;
	while (dest[idx] != '\n' && dest[idx])
		idx++;
	if (dest[idx] == '\0')
	{
		free(dest);
		return (NULL);
	}
	new_dest = malloc(sizeof(char) * ft_strlen(dest) - idx + 1);
	if (new_dest == NULL)
		return (NULL);
	idx++;
	new_idx = 0;
	while (dest[idx])
		new_dest[new_idx++] = dest[idx++];
	new_dest[new_idx] = '\0';
	free (dest);
	return (new_dest);
}

char	*get_next_line(int fd)
{
	static char	*dest;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	dest = ft_read(fd, dest);
	if (!dest)
		return (NULL);
	line = ft_line(dest);
	dest = ft_next_line(dest);
	return (line);
}
