/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:04 by frea              #+#    #+#             */
/*   Updated: 2024/12/09 19:11:45 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_split: split a string into an array of words
**	Input: A string s and a delimiter c.
**  Output: An array of strings (each representing a word) 
**  obtained by splitting s at occurrences of c.
**  Allocates memory for the array of strings using malloc.
**  Return the array with a NULL pointer.
*/

char    **ft_split(char const *s, char c)
{
	size_t	words_nb;
	char	**words;

	if (!s)
		return (NULL);
	words_nb = count_words(s, c);
	words = malloc(sizeof(char **) * (words_nb + 1));
	if (!words)
		return (NULL);
	make_words(words, s, c, words_nb);
	return (words);
}

static size_t	count_words(const char *str, char c)
{
	size_t	words_count;
	int		sep;

	words_count = 0;
	sep = 1;
	while (*str)
	{
		if (*str != c && sep != 0)
		{
			sep = 0;
			words_count++;
		}
		else if (*str == c)
			sep = 1;
		str++;
	}
	return (words_count);
}

static void	make_words(char **words, const char *str, char c, size_t words_nb)
{
	char	*ptr_c;

	while (*str && *str == c)
		str++;
	while (words_nb-- != 0)
	{
		ptr_c = ft_strchr(str, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(str, 0, (ptr_c - str));
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			str = ptr_c;
		}
		else
			*words = ft_substr(str, 0, (ft_strlen(str) + 1));
		words++;
	}
	*words = NULL;
}