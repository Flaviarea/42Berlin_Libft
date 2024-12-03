/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:15:57 by frea              #+#    #+#             */
/*   Updated: 2024/11/18 15:15:58 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*	ft_atoi:
**	Converts the string 'str' to an integer. ex: "42" to 42.
**	Handles optional leading whitespace and sign (+/-). ASCII = 9 to 13 and 32. 
**	Returns the resulting integer value.
*/

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}
