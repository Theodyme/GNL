/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 01:28:11 by flplace           #+#    #+#             */
/*   Updated: 2022/03/28 01:28:12 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line_bonus.h"

int	ft_strchr(char *str, char c)
{
	int	i;

	if (!str || !c)
		return (-1);
	i = 0;
	c = (char)c;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	if (str[i] == c)
		return (i);
	return (-1);
}

int	ft_lstsize(t_list *lst)
{
	int		ct;

	ct = 0;
	while (lst)
	{
		ct++;
		lst = lst->next;
	}
	return (ct);
}

char	*ft_strcat(char *dst, char *src, char c)
{
	while (*src && *src != c)
	{
		*dst++ = *src++;
	}
	*dst++ = *src++;
	if (c)
		*dst = '\0';
	return (dst - 1);
}

t_list	*ft_free_and_next(t_list *buf)
{
	t_list	*tmp;

	tmp = buf->next;
	free(buf);
	return (tmp);
}
