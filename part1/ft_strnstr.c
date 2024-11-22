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
#include <stdio.h>

/*	ft_strnstr:
**	Locates the first occurrence of the substring 'to_find' within the string 'str',
**	looking only within the first 'n' characters.
**	Returns a pointer to the beginning of the located substring or NULL if 'to_find' is not found.
*/
char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[0] || to_find == NULL)
		return ((char *)str);
	if (n == 0)
		return (NULL);
	while (i < n && str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main(int argc, char **argv)
{
	char *str = "Hello world lower more";
	char *to_find = "lower";
	
	printf("%s\n", ft_strnstr(str, to_find, 20));
	
	return 0;
}
*/
