/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:01:04 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/11 16:08:18 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Includes library containing the write function
#include <unistd.h>

//Displays the letters of the alphabet in lower case from a to z
void	ft_print_alphabet(void)
{
	char	letter;
	int		letter_value;

	letter = 'a';
	letter_value = letter;
	while (letter_value < 123)
	{
		letter = letter_value;
		write (1, &letter, 1);
		letter_value++;
	}
}
