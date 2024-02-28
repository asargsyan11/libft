/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:31:23 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/17 13:26:09 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	answer;

	answer = c;
	if (c >= 'A' && c <= 'Z')
		answer += 32;
	return (answer);
}
