/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:32:32 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/20 05:00:13 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{

	unsigned int	i;
	size_t	src_len;
	int	count;


	src_len = ft_strlen(src);
	count = 0;
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[4] ;
	printf("strlcpy = %lu\n", strlcpy(a, "Hello", 4));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(a, "Hello", 4));

	char b[10];
	printf("strlcpy = %lu\n", strlcpy(b, "Hello", 10));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(b, "Hello", 10));

	char c[6];
	printf("strlcpy = %lu\n", strlcpy(c, "Hello", 6));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(c, "Hello", 6));

	char d[4];
	printf("strlcpy = %lu\n", strlcpy(d, "Hel", 4));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(d, "Hel", 4));

	char e[5];
	printf("strlcpy = %lu\n", strlcpy(e, "HelloWorld", 5));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(e, "HelloWorld", 5));

	char f[10];
	printf("strlcpy = %lu\n", strlcpy(f, "", 10));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(f, "", 10));

	char g[10];
	printf("strlcpy = %lu\n", strlcpy(g, "\0", 10));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(g, "\0", 10));

	char h[5] = "\0";
	printf("strlcpy = %lu\n", strlcpy(h, "12345", 5));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(h, "12345", 5));

	char i[10];
	printf("strlcpy = %lu\n", strlcpy(i, "Hello", 0));
	printf("ft_strlcpy = %lu\n", ft_strlcpy(i, "Hello", 0));

	return (0);
}
