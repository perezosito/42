/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:24:10 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/12 09:52:02 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	start;
	int	end;

	start = 'z';
	end = 'a';
	while (start >= end)
	{
		write(1, &start, 1);
		start--;
	}
}
