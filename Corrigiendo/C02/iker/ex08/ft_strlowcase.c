/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:10:18 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/18 12:20:15 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr - ('A' - 'a');
		}
		ptr++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
    	char	cadena[] = "HOLA IKER";

        printf("Original: %s\n", cadena);
        printf("Mayus: %s\n", ft_strlowcase(cadena));
        return (0);
}
