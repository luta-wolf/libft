/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:57:17 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/15 00:26:49 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char *str;
	int len;
	int i;
	int flag;

	flag = 1;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		n = n * -1;
		flag = -1;
	}
	i = n;
	len = 0;
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
//	printf("Длина числа: %d\n", len);
	if (flag == 1)
	{
		str = (char *)malloc(sizeof(char *) * (len + 1));
		str[len] = '\0';
		while (len != 0)
		{
			str[len - 1] = (n % 10) + 48;
//			printf("%d\n", n);
//			printf("%c\n", str[len]);
			n = n / 10;
			len--;
		}
	}
	else
	{
		str = (char *)malloc(sizeof(char *) * (len + 1));
		str[len + 1] = '\0';
		while (len + 1 != 0)
		{
			str[len] = (n % 10) + 48;
//			printf("%d\n", n);
//			printf("%c\n", str[len]);
			n = n / 10;
			len--;
		}
		str[0] = '-';
	}
	if (str == NULL)
		return (NULL);
//	printf ("Строка число:%s\n", str);
	return (str);
}


/*int main()
{
	int nbr;
	int nbr2;

	nbr = -456123;
	nbr2 = 456123;

	printf ("Строка число:%s\n", ft_itoa(nbr));
	printf ("Строка число:%s\n", ft_itoa(nbr2));
	return (0);
}*/
