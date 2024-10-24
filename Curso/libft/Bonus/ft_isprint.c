/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:39:30 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:39:34 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isprint.c
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
