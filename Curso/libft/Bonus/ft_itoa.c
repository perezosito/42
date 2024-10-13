/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:02:29 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:02:36 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_itoa.c
#include "libft.h"
#include <stdlib.h>

static int get_num_length(int n)
{
    int length = (n <= 0) ? 1 : 0;

    while (n)
    {
        n /= 10;
        length++;
    }
    return length;
}

char *ft_itoa(int n)
{
    int length = get_num_length(n);
    char *str = (char *)malloc(length + 1);
    unsigned int num;

    if (!str)
        return NULL;
    
    str[length] = '\0';
    num = (n < 0) ? -n : n;

    while (length--)
    {
        str[length] = (num % 10) + '0';
        num /= 10;
    }
    
    if (n < 0)
        str[0] = '-';

    return str;
}

