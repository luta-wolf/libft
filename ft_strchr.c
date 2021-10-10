/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:38:57 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/10 21:33:45 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *s2;

    i = 0;
    s2 = (char *)s;
    while (s2[i] != '\0')
    {
        if (s2[i] == c)
            return (&s2[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}