/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:16 by frea              #+#    #+#             */
/*   Updated: 2024/12/05 18:22:46 by frea             ###   ########.fr       */
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

/*  Counts the number of decimal digits in the integer 'n'.
**  Returns the total number of digits needed to represent 'n' as a string.
*/

static int	get_digits(long int n)
{
	long int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n; //convert negative int 'n' into positive to not handle the - sign 
		digit++; // Add 1 to count space for the '-' sign
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

	nb = n; // handle large values with 'long'
	len = getdigits(nb); // call the function to get the number of digits in nb 
	str = (char *)malloc(sizeof(char) * (len + 1)); //+1 for null terminator 
	if (!str)
		return (NULL);
	str[len] = '\0'; // add the null terminator 
	if (nb == 0) // handle zero case. If the number is 0, we directly put the character '0' into the string because 0 is a special case.
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-'; //If the number is negative, we add a '-' at the beginning of the string and make nb positive (because we can't work with negative numbers in our string format).
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0'; // len represents the index in the string where the next digit will be placed.
                                        //--len decrements len by 1 before using it as the index. Start by adding the char at the end (nb/10)
		nb /= 10;
	}
	return (str);
}

