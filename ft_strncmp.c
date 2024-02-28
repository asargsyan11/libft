/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:19 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/17 13:25:31 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		answer;

	i = 0;
	answer = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)(s1[i]) > (unsigned char)(s2[i]))
		{
			answer = 1;
			break ;
		}
		else if ((unsigned char)(s1[i]) < (unsigned char)(s2[i]))
		{
			answer = -1;
			break ;
		}
		else
			i++;
	}
	return (answer);
}
