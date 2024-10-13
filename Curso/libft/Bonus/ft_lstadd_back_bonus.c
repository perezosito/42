/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:09:23 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 16:09:25 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstadd_back.c
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return;

    if (!*lst)
    {
        *lst = new;
        return;
    }

    last = ft_lstlast(*lst);
    last->next = new;
}

