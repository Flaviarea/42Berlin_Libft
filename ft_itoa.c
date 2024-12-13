/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:16 by frea              #+#    #+#             */
/*   Updated: 2024/12/12 12:45:24 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_itoa: from integer to string (ASCII)
**	It does the opposite of ft_atoi.
**  Allocates (with malloc(3)) and returns a string 
**  representing the integer received as an argument. 
**	Negative numbers must be handled. n: the integer to convert.
**	Returns The string representing the integer. NULL if the allocation fails.
*/

static int	get_digits(long int n)
{
	long int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		digit++; 
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	nb = n; 
	len = get_digits(nb); 
	str = (char *)malloc(sizeof(char) * (len + 1)); 
	if (!str)
		return (NULL);
	str[len] = '\0'; 
	if (nb == 0) 
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-'; 
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
