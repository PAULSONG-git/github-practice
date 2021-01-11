/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:28:27 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 11:24:34 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void* s1, const void* s2, size_t n)
{
    size_t i;
    unsigned char*  ptr1;
    unsigned char*  ptr2;

    i = 0;
    ptr1 = (unsigned char*)s1;
    ptr2 = (unsigned char*)s2;
    if (n == 0)
	return (0);
    while (ptr1[i] == ptr2[i] && ptr1[i] != '\0' && ptr2[i] != '\0' && i < n - 1)
    {
	i++;
    }
    return ((int)(ptr1[i] - ptr2[i]));
}
