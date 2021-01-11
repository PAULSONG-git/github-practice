/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:23:35 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 13:27:43 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
    void    *dest;

    if (!n || !size)
	return (dest = malloc(n * size));
    if (!(dest = (void*)malloc(size * n)))
	return (NULL);
    return (ft_bzero(dest, n));
}
