/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:13:36 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/15 19:15:18 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, &str, 1);
		str++;
	}
}

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

#include <unistd.h>
int	main(void)
{
	ft_putstr("hola mundo ¿que tal andamios?");
	return (0);
