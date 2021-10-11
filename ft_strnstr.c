/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:15:20 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/11 18:56:32 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t tmp;
    
    tmp = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (*haystack != len && *haystack != '\0')
    {
        while (*haystack == *needle)
        {
            haystack++;
            needle++;
        }
        
        haystack++;
    }
}