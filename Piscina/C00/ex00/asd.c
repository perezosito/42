/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:33:12 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/26 13:33:16 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char X);

void	ft_putchar(char X)
{
	write(1, &X, 1);
}

int	main(void)
{
	ft_putchar('H');
	return (0);
}
