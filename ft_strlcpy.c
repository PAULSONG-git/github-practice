/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:21:31 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 13:30:04 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    if (dstsize == '\0')
	return (ft_strlen(src));
    i = 0;
    while (src[i] && i < dstsize - 1)
    {
	dst[i] = src[i]; 
	i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
