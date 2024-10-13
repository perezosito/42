/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:54:28 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:55:15 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_atoi.c
#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    long result = 0;

    // Ignorar espacios
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Manejar el signo
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Convertir la cadena a número
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
        // Manejar desbordamiento
        if (result * sign > INT_MAX)
            return -1; // o un valor que definas para indicar desbordamiento
        if (result * sign < INT_MIN)
            return 0; // o un valor que definas para indicar desbordamiento
    }
    return (int)(result * sign);
}

