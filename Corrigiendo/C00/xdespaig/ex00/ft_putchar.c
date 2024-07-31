/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdespaig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:31:31 by xdespaig          #+#    #+#             */
/*   Updated: 2024/07/15 21:29:48 by xdespaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char recibido);

void	ft_putchar(char recibido)
{
	write(1, &recibido, 1);
}









int	main(void)
{
	ft_putchar('H');
}
