/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:29:23 by eloymart          #+#    #+#             */
/*   Updated: 2024/07/15 11:59:20 by eloymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
