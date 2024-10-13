/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:03:25 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:03:40 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_striteri.c
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;

    for (i = 0; s[i]; i++)
    {
        f(i, &s[i]);
    }
}

