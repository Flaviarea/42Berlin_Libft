/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:50:11 by frea              #+#    #+#             */
/*   Updated: 2024/12/09 19:03:15 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	checks whether c is a 7-bit unsigned char value 
**	that fits into the ASCII character set
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
