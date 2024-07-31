/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:23:48 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 17:33:52 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>

int     main()
{
    printf("%d\n", ft_str_is_printable("NCOçççIS")); // Debe devolver 1
    printf("%d\n", ft_str_is_printable("234")); // Debe devolver 1
    printf("%d\n", ft_str_is_printable("")); // Debe devolver 1 
    printf("%d\n", ft_str_is_printable("!~"));   // Debe devolver 1
    printf("%d\n", ft_str_is_printable("- ~"));// Debe devolver 0 
}
