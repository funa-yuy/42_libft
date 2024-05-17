/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:22:42 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/17 22:47:47 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	dst = NULL;
	i = 0;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while(len > i)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	printf("ft_substr = %s\n", ft_substr("0123456789", 2, 3));
	printf("ft_substr = %s\n", ft_substr("0123456789", 2, 8));
	return (0);
}
