/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:13:02 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 12:33:16 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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

int main()
{
    printf("%d\n", ft_str_is_alpha("Hello")); // Debe devolver 1
    printf("%d\n", ft_str_is_alpha("Hello123")); // Debe devolver 0
    printf("%d\n", ft_str_is_alpha(""));         // Debe devolver 1 
    printf("%d\n", ft_str_is_alpha("abcXYZ"));   // Debe devolver 1
    printf("%d\n", ft_str_is_alpha("abc XYZ"));  // Debe devolver 0 
    return 0;
}
