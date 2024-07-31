/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloymart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:50:25 by eloymart          #+#    #+#             */
/*   Updated: 2024/07/15 18:42:01 by eloymart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char str)
{
	if ((str > 64 && str < 91) || (str > 96 && str < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_numeric(char str)
{
	if (str > 47 && str < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_uppercase(char str)
{
	if (str > 64 && str < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f_word;

	f_word = 1;
	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) && f_word)
		{
			f_word = 0;
		}
		if (is_alpha(str[i]) && f_word)
		{
			str[i] = str[i] - 32;
			f_word = 0;
		}
		if (!is_numeric(str[i]) && !is_alpha(str[i]))
		{
			f_word = 1;
		}
		i++;
	}
	return (str);
}
