/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:19:25 by frea              #+#    #+#             */
/*   Updated: 2024/12/11 21:03:01 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putchar_fd:
**	Outputs the character ’c’ to the given file descriptor.
**	c: The character to output. fd: The file descriptor on which to write.
**	Does not return.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
