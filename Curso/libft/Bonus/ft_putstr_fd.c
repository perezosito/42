/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:13 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:05:30 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putstr_fd.c
#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, ft_strlen(s));
}

