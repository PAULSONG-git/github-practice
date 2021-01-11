/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 14:30:27 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 09:41:18 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
    char    *last_pos;
    int i;

    i = 0;
    last_pos = (0);
    while (str[i])
    {
	if (str[i] == c)
	    last_pos = (char*)&str[i];
	i++;
    }
    if (last_pos)
	return (last_pos);
    if (c == '\0')
	return ((char*)str);
    return (0);
}
