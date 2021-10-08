/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:49:29 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/07 15:51:23 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return c;
    else
        return 0;

}

int main()
{
    printf("%d\n", ft_isdigit('5'));
}