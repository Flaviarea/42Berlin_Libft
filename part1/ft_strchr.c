/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:55 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:37:57 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strchr: string character
**	Locates the first occurrence of the character 'c' in the string 'str'.
**	If 'c' is 0, it returns a pointer to the null terminator of 'str'.
**	Returns a pointer to the first occurrence of 'c' in 'str' or NULL if 'c' is not found.
*/
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *)str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == (const char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
