/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:19:46 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:19:48 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putstr_fd:
**	Outputs the string ’s’ to the given file descripto,
**	s: The string to output. fd: The file descriptor on which to write.
**	Does not return.
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
int main ()
{
    ft_putstr_fd("string", 2); 
    return 0;
}
*/
