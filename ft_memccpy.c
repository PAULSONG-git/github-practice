/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:22:53 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 10:39:56 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
   
    i = 0;
    while (i < n)
    {
	((char*)dst)[i] = ((unsigned char*)src)[i];
	if (((unsigned char*)src)[i] == (unsigned char)c)
	    return (&dst[i + 1]);
	i++;
    }
    return (NULL);
}
