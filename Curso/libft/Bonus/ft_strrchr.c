/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:48:31 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:48:36 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strrchr.c
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = s;
        s++;
    }
    return (c == '\0') ? (char *)s : (char *)last_occurrence;
}

