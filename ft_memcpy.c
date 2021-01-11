/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 13:41:24 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 10:33:50 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (dst == 0 || src == 0)
	return (NULL);
    while (i < n)
    {
	((char*)dst)[i] = ((unsigned char*)src)[i];
	i++;
    }
    return (dst);
}
