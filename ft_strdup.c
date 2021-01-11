/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:41:04 by paul              #+#    #+#             */
/*   Updated: 2021/01/11 11:44:00 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char    *dest;
    int		    i;

    i = 0;
    while (s1[i])
	i++;
    if (!(dest = malloc(sizeof(char) * (i + 1))))
	return (NULL);
    while (i >= 0)
    {
	dest[i] = s1[i];
	i--;
    }
    return (dest);
}
