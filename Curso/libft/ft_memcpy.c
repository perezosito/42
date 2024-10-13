/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:44:37 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:44:44 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memcpy.c
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (!dest && !src)
        return NULL;

    while (n--)
        *d++ = *s++;
    
    return dest;
}

