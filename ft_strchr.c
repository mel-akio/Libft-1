/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:44:39 by xamartin          #+#    #+#             */
/*   Updated: 2017/11/09 19:36:39 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[i]);
	if (i != 0)
	{
		while (i-- != 0)
		{
			if (*s++ == (char)c)
				return ((char *)(s - 1));
		}
	}
	return (NULL);
}
