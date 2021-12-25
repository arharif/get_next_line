/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 08:23:06 by arharif           #+#    #+#             */
/*   Updated: 2021/12/19 08:23:20 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int ch)
{
	int	idx;

	idx = 0;
	while (str != NULL && str[idx] != ch)
	{
		if (str[idx] == '\0')
			return (NULL);
		idx++;
	}
	return (&str[idx]);
}

char	*ft_strjoin(char *dest, char *buff)
{
	char	*ptr;
	size_t	idx;
	size_t	i;

	if (!dest)
	{
		dest = (char *)malloc(sizeof(char *) * 1);
		dest[0] = '\0';
	}
	if (!buff)
		return (NULL);
	idx = -1;
	i = 0;
	ptr = malloc(ft_strlen(dest) + ft_strlen(buff) + 1);
	if (ptr == NULL)
		return (0);
	if (dest)
		while (dest[++idx])
			ptr[idx] = dest[idx];
	while (buff[i])
		ptr[idx++] = buff[i++];
	ptr[idx] = '\0';
	free(dest);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
