/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:46 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:00:10 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strjoin_bonus.c
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = (char *)malloc(len1 + len2 + 1);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, len1 + 1);
	ft_strlcat(joined_str, s2, len1 + len2 + 1);
	return (joined_str);
}
