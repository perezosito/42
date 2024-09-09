/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:36:58 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/14 12:37:11 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, char first, char middle, char last)
{
	if (width > 0)
	{
		ft_putchar(first);
		width--;
	}
	while (width > 1)
	{
		ft_putchar(middle);
		width--;
	}
	if (width > 0)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (y > 0)
	{
		print_line(x, '/', '*', '\\');
		y--;
	}
	while (y > 1)
	{
		print_line(x, '*', ' ', '*');
		y--;
	}
	if (y > 0)
	{
		print_line(x, '\\', '*', '/');
	}
}
