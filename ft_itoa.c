/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:10:40 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/02 17:26:46 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	res;
	int	num;

	num = n;
	res = 0;
	if (num <= 0)
	{
		res++;
	}
	num *= -1;
	while (num)
	{
		num /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	len = get_len(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (get_len(n) + 1));
	if (str == NULL)
		return (NULL);
	*(str + len) = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
