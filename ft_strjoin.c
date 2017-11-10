/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:32:19 by xamartin          #+#    #+#             */
/*   Updated: 2017/11/08 17:49:49 by xamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char    *tab;
	int      i;

	i = (ft_strlen(s1) + ft_strlen(s2));
	if (!(tab = (char *)malloc(sizeof(*tab) * (i + 1))))
		return (NULL);
	tab = ft_strcat((char*)s1, (char*)s2);
	return (tab);
}
