/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:07:27 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 15:42:00 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
    printf("%d\n", ft_str_is_numeric("1234")); //Debe devolver 1
    printf("%d\n", ft_str_is_numeric("Hello123")); //Debe devolver 0
    printf("%d\n", ft_str_is_numeric("")); //Debe devolver 1 (cadena vacía)
    printf("%d\n", ft_str_is_numeric("09876")); //Debe devolver 1
    printf("%d\n", ft_str_is_numeric("91")); //devolver 1 
    return 0;
}
