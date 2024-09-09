/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:54:07 by zhxu              #+#    #+#             */
/*   Updated: 2024/07/15 19:58:55 by zhxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zyx;

	zyx = 'z';
	while (zyx >= 'a')
	{
		write(1, &zyx, 1);
		zyx--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

