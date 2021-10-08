/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:04:04 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/08 22:15:26 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t  ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (*str != '\0')
    {
        str++;
        i++;
    }
    return i;
}

/*int main()
{
    char a[] = "Denis";
    printf("%zu\n", ft_strlen(a));

}*/