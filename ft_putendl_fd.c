/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:20:02 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:20:05 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putendl_fd:
**	Outputs the string ’s’ to the given file descriptor followed by a newline.
**	s: The string to output. fd: The file descriptor on which to write.
**	Does not return.
*/

void	ft_putendl_fd(char *s, int fd)
