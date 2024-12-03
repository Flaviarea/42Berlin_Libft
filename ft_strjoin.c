/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:17:34 by frea              #+#    #+#             */
/*   Updated: 2024/12/03 19:26:34 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strjoin: join two strings in a new one
**	Allocates (with malloc(3)) and returns a 
**	new string, which is the result of the concatenation of ’s1’ and ’s2’.
**	s1: The prefix string. s2: The suffix string.
**	returns the new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
    size_t	len1;
	size_t	len2;

	if (!(s1 && s2))
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2); // initializing len1 with the length of s1
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new) 
		return (NULL); //return NULL if malloc fails
	ft_strcpy(new, s1);
	ft_strcpy(new + len1, s2);
	return (new); // return the concatenated string
}
/*	 
int main()
{
    // Test case 1: Both strings are non-NULL
    char *s1 = "Hello";
    char *s2 = "World";
    
    char *result = ft_strjoin(s1, s2);
    
    if (result) {
        printf("Concatenated string: %s\n", result);  // Should print "HelloWorld"
        free(result);  // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed or one of the strings is NULL.\n");
    }

    // Test case 2: One string is NULL
    s1 = NULL;
    s2 = "World";
    
    result = ft_strjoin(s1, s2);
    
    if (result) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed or one of the strings is NULL.\n");  // Should print this
    }

    // Test case 3: Both strings are NULL
    s1 = NULL;
    s2 = NULL;

    result = ft_strjoin(s1, s2);
    
    if (result) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed or one of the strings is NULL.\n");  // Should print this
    }

    return 0;
}
*/