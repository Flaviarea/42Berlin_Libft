/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:55 by frea              #+#    #+#             */
/*   Updated: 2024/12/03 19:26:33 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strchr: string character
**	Locates the first occurrence of the 
**	character 'c' in the string 'str'.
**	If 'c' is 0, it returns a pointer 
**	to the null terminator of 'str'.
**	Returns a pointer to the first occurrence of 'c' 
**	in 'str' or NULL if 'c' is not found.
*/
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *)str);
		str++;
	}
	if (*str == (char) c)
		return ((char *)str);
	return (NULL);
}
