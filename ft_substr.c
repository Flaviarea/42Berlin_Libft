/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:15:52 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:15:55 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_substr: substring extraction
**	Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’
**	s: The string from which to create the substring.
**	start: The start index of the substring in the string ’s’.
**	len: The maximum length of the substring.
**	Returns the substring. NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return(ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
/*
int main()
{
const char *str = "Hello, World!";
char *sub;

sub = ft_substr(str, 7, 5); // Start at index 7, extract up to 5 characters
printf("%s\n", sub);       // Output: "World"
free(sub);
*/
