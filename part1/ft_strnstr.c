/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:39:12 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:39:13 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strnstr:
**	Locates the first occurrence of the substring 'to_find' within the string 'str',
**	looking only within the first 'len' characters.
**	Returns a pointer to the beginning of the located substring or NULL if 'to_find' is not found.
*/
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[0] || to_find == NULL)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (i < len && str[i])
	{
		j = 0;
		while ((i + j) < len && to_find[j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
