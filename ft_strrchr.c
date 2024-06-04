/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:13:33 by miyuu             #+#    #+#             */
/*   Updated: 2024/06/03 16:13:38 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;

	result = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			result = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)result);
}
