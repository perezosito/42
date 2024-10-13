/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:01:02 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:01:07 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ft_split.c
#include "libft.h"
#include <stdlib.h>

static int count_words(char const *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return count;
}

static char *get_next_word(char const **s, char c)
{
    char const *start;
    char *word;
    size_t len;

    while (**s == c && **s)
        (*s)++;
    
    start = *s;
    while (**s && **s != c)
        (*s)++;
    
    len = *s - start;
    word = (char *)malloc(len + 1);
    if (!word)
        return NULL;

    ft_strlcpy(word, start, len + 1);
    return word;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int words;
    int i;

    if (!s)
        return NULL;

    words = count_words(s, c);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if (!result)
        return NULL;

    i = 0;
    while (i < words)
    {
        result[i] = get_next_word(&s, c);
        if (!result[i])
        {
            while (i--)
                free(result[i]);
            free(result);
            return NULL;
        }
        i++;
    }
    result[i] = NULL;
    return result;
}

