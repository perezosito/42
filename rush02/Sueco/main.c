/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:57:53 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/28 18:37:18 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "dictionary_utils.h"
#include "converter.h"
#include "common_utils.h"
#include <stdlib.h>
#include <fcntl.h>
#include "handle_file_content.h"

int	main(int argc, char **argv)
{
	char	*str;
	char	key[50];
	char	value[50];
	int	argument_index;
	long long int	n;
	char	result[100000];
	Dictionary	dict = {0};

	str = malloc(1000);
	if (argc < 2 || argc > 3)
	{
		printf("Error1\n");
		return (1);
	}
	if (argc == 3)
	{
		str = get_file_content(argv[1]);
		argument_index = 2;
	}
	else if (argc == 2)
	{
		str = get_file_content("numbers.dict");
		argument_index = 1;
	}
	while (*str)
	{
		insert(get_key(str, key), get_value(str, value), &dict);
		while (*str != '\n')
		{
			str++;
		}
		str++;
	}
	if (!is_valid_number(argv[argument_index]))
	{
		printf("Error2\n");
		return (1);
	}
	if (get(argv[argument_index], &dict) == NULL)
	{
		n = ft_atoll(argv[argument_index]);
		if (n < 0)
		{
			return (1);
		}
		number_to_words(n, result);
		printf("%s\n", result);
	}
	else
	{
		printf("%s ", get(argv[argument_index], &dict));
	}
	return (0);
}
