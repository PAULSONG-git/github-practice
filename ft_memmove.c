/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 15:27:36 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 13:25:07 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void* dst, const void* src, size_t len)
{
    size_t	    i;
    unsigned char*  dst_ptr;
    const unsigned char*    src_ptr;

    i = 0;
    dst_ptr = (unsigned char*)dst;
    src_ptr = (unsigned char*)src;

    if (dst_ptr > src_ptr)
	while (++i <= len)
	    dst_ptr[len - i] = src_ptr[len - i];
    else
	while (i < len)
	    dst_ptr[i] = src_ptr[i];
    return (dst);
}
