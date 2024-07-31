/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:38:20 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/28 19:10:01 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "common_utils.h"
#include <stdio.h>

char	*g_below_twenty[] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
	"Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
	"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
};
char	*g_tens[] = { 
	"", "", "Twenty", "Thirty", "Forty", "Fifty",
	"Sixty", "Seventy", "Eighty", "Ninety"
};
char	*g_thousands[] = {
	"", "Thousand", "Million", "Billion", "Trillion",
	"quadrillion", "quintillion", "sextillion", "septillion", "octillion",
	"nonillion", "decillion", "undecillion"
};


void	convert_hundreds(int num, char *res)
{
	if (num >= 100)
	{
		mein_strcat(res, g_below_twenty[num / 100]);
		mein_strcat(res, " Hundred ");
		num %= 100;
	}
	if (num >= 20)
	{
		mein_strcat(res, g_tens[num / 10]);
		mein_strcat(res, " ");
		num %= 10;
	}
	if (num > 0)
	{
		mein_strcat(res, g_below_twenty[num]);
		mein_strcat(res, " ");
	}
}

void	number_to_words(long long int n, char *result)
{
	int	chunk_count;

	chunk_count = 0;
	while (n > 0)
	{
		int	chunk;
		
		chunk = n % 1000;
		if (chunk > 0) 
		{
			char chunk_str[100] = "";
			convert_hundreds(chunk, chunk_str);
			if (g_thousands[chunk_count][0] != '\0') 
			{
				mein_strcat(chunk_str, g_thousands[chunk_count]);
				mein_strcat(chunk_str, " ");
			}
			char temp[1000];
			mein_strcpy(temp, result);
			mein_strcpy(result, chunk_str);
			mein_strcat(result, temp);
		}
		n /= 1000;
		chunk_count++;
	}
}
