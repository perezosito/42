/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:29:16 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/16 19:47:14 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{

	while (*str)
	{
		write (1, str, 1);
	}
}

int	main(void)
{
	strcpy ("hola que tal");
	return (0);
}
