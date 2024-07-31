/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:43:41 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 16:23:51 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
			i++;
		}
	}
	return (1);
}

#include <stdio.h>

int	main()
{
    printf("%d\n", ft_str_is_lowercase("adafes")); //Debe devolver 1
    printf("%d\n", ft_str_is_lowercase("Hello")); //Debe devolver 0
    printf("%d\n", ft_str_is_lowercase("")); //Debe devolver 1 
    printf("%d\n", ft_str_is_lowercase("vsvs4ves")); //Debe devolver 0
    printf("%d\n", ft_str_is_lowercase("BSBISB")); //devolver 0 
    return 0;
}
