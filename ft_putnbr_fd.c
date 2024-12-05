/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:20:30 by frea              #+#    #+#             */
/*   Updated: 2024/12/05 18:36:39 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putnbr:
**	Outputs the integer ’n’ to the given file descriptor.
**	n: The integer to output. fd: The file descriptor on which to write.
**	Does not return.
*/

void	ft_putnbr_fd(int n, int fd)
{
	char		c; // the char to write 
	long int	nb; // holds the number we want to print.

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd); // if 'nb' it's negative print a minus sign ('-') using ft_putchar_fd().
        nb = -nb;                    // Change the number to positive by making it -nb. This is done so we can work with the positive version of the number.
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd); // if 'nb' is 10 or more, we call the function again with the number divided by 10.
        c = (nb % 10) + '0'; // This step is really important because it breaks the number into smaller parts (digits).
	write(fd, &c, 1); // For example, if nb = 123, dividing by 10 gives 12, and we keep dividing until we reach the last digit.
}                          
/*
int main ()
{
    ft_putnbr_fd(-2147483648, 1);
    return 0;
}
*/