/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:38:12 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:38:14 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strrchr:
**	Locates the last occurrence of the character 'c' in the string 'str'.
**	Returns a pointer to the last occurrence of 'c' in 'str' or NULL if 'c' is not found.
*/
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == (const char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
