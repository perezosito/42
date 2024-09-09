/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:49:32 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 17:25:52 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

int	main()
{
    printf("%d\n", ft_str_is_uppercase("VSRV"));    // Debe devolver 1
    printf("%d\n", ft_str_is_uppercase("Hello123")); // Debe devolver 0
    printf("%d\n", ft_str_is_uppercase(""));         // Debe devolver 1
    printf("%d\n", ft_str_is_uppercase("X"));   // Debe devolver 1
    printf("%d\n", ft_str_is_uppercase("CA XYZ"));  // Debe devolver 0
    return 0;
}
