/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:45:25 by zhxu              #+#    #+#             */
/*   Updated: 2024/07/15 19:50:52 by zhxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* declaración variable abecedario */
void	ft_print_alphabet(void)
{
	char	abc;

	abc = 'a';
	while (abc <= 'z')
	{
		write (1, &abc, 1);
		abc++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

