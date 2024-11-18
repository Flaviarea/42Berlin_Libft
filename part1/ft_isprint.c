/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:05:00 by frea              #+#    #+#             */
/*   Updated: 2024/11/18 14:05:04 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* checks for any printable character including space.
** Printable characters are those with ASCII values between 32 and 126, inclusive.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
