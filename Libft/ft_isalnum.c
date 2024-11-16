/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:41:47 by frea              #+#    #+#             */
/*   Updated: 2024/11/16 18:41:59 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).//

#include "libft.h"

int	isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
