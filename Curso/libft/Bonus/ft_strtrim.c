/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:00:33 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:00:49 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strtrim.c
#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    char *trimmed_str = (char *)malloc(end - start + 1);
    if (!trimmed_str)
        return NULL;

    ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
    return trimmed_str;
}

