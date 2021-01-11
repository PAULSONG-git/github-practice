/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:43:13 by paul              #+#    #+#             */
/*   Updated: 2021/01/08 16:57:43 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  size;

    if (s == 0)
	return ((void*)0);
    str = (char*)malloc(sizeof(char) * (len + 1));
    if (str == 0)
	return ((void*)0);
    size = strlen(s);
    if (size <= start)
    {
	str[0] = 0;
	return (str);
    }
    strlcpy(str, s + start, len + 1);
    return (str);
}
