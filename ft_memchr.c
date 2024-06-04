/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:03:02 by mfunakos          #+#    #+#             */
/*   Updated: 2024/06/03 16:02:46 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	c &= 0xff;
	str = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
	while (0 < n)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
