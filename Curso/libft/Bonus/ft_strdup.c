/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:57:54 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:57:57 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strdup.c
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len = ft_strlen(s1);

    dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;

    ft_strlcpy(dup, s1, len + 1);
    return dup;
}

