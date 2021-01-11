/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 14:21:31 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 10:22:10 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i])
	i++;
    if (dstsize < i)
    {
	while (src[j++])
	    j++;
	return (dstsize + j);
    }
    while (src[j] && i < dstsize - 1)
	dst[i++] = src[j++];
    dst[i] = '\0';
    while (src[j++])
	i++;
    return (i);
}
