/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:20:30 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:20:32 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putnbr:
**	Outputs the integer ’n’ to the given file descriptor.
**	n: The integer to output. fd: The file descriptor on which to write.
**	Does not return.
*/

void	ft_putnbr_fd(int n, int fd)
