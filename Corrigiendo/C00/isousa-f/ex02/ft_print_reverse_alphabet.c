/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:10:03 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/11 16:33:57 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Includes the library containing the write function
#include <unistd.h>

//Displays the alphabet in lower case from z to a on the console
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a' )
	{
		write (1, &letter, 1);
		letter--;
	}
}
