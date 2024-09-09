/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:26:32 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/11 14:58:47 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Includes library containing the write function
#include <unistd.h>

//Receives a parameter as input argument and prints it for the selected output
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
