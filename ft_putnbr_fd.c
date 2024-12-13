/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:20:30 by frea              #+#    #+#             */
/*   Updated: 2024/12/11 21:02:46 by frea             ###   ########.fr       */
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
	char		c; 
	long int	nb; 

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = (nb % 10) + '0';
	write(fd, &c, 1); 
}
