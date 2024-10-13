/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:58:59 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:59:06 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ft_substr_bonus.c
#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t s_len;

    if (!s)
        return NULL;

    s_len = ft_strlen(s);
    
    if (start >= s_len)
        return ft_calloc(1, sizeof(char)); // Si 'start' es mayor que la longitud de 's', devolver cadena vacía.

    if (len > s_len - start)
        len = s_len - start; // Asegurarse de que no exceda el tamaño.

    substr = (char *)malloc(len + 1);
    if (!substr)
        return NULL; // Manejo de error si la memoria no se asigna.

    ft_strlcpy(substr, s + start, len + 1); // Copiar el substring
    return substr;
}

