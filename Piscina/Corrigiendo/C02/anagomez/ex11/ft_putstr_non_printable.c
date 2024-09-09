/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:15:10 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/17 11:15:11 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	buffer[4];

	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			buffer[0] = '\\';
			buffer[1] = "0123456789abcdef"[(unsigned char)*str >> 4];
			buffer[2] = "0123456789abcdef"[(unsigned char)*str & 0x0F];
			buffer[3] = '\0';
			write(1, buffer, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

int	main(void)
{
	char	texto[] = "Coucou\ntu vas bien ?";

	write(1, "Texto original:\n", 16);
	write(1, texto, sizeof(texto) - 1);
	write(1, "\nTexto con los caracteres no imprimibles:\n\n", 42);
	ft_putstr_non_printable(texto);
	return (0);
}
