/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:41:55 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:42:00 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memset.c
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	*ptr = b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
