/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:49:35 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:49:39 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memchr.c
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;

    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}

