/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 03:52:36 by miyuu             #+#    #+#             */
/*   Updated: 2024/04/20 05:36:20 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dst[i] = src [j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

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

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dst[i] = src [j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[4] ;
	printf("strlcat = %lu\n", strlcat(a, "Hello", 4));
	printf("ft_strlcat = %lu\n", ft_strlcat(a, "Hello", 4));

	char b[10];
	printf("strlcat = %lu\n", strlcat(b, "Hello", 10));
	printf("ft_strlcat = %lu\n", ft_strlcat(b, "Hello", 10));

	char c[6];
	printf("strlcat = %lu\n", strlcat(c, "Hello", 6));
	printf("ft_strlcat = %lu\n", ft_strlcat(c, "Hello", 6));

	char d[4];
	printf("strlcat = %lu\n", strlcat(d, "Hel", 4));
	printf("ft_strlcat = %lu\n", ft_strlcat(d, "Hel", 4));

	char e[5];
	printf("strlcat = %lu\n", strlcat(e, "HelloWorld", 5));
	printf("ft_strlcat = %lu\n", ft_strlcat(e, "HelloWorld", 5));

	char f[10];
	printf("strlcat = %lu\n", strlcat(f, "", 10));
	printf("ft_strlcat = %lu\n", ft_strlcat(f, "", 10));

	char g[10];
	printf("strlcat = %lu\n", strlcat(g, "\0", 10));
	printf("ft_strlcat = %lu\n", ft_strlcat(g, "\0", 10));

	char h[5] = "\0";
	printf("strlcat = %lu\n", strlcat(h, "12345", 5));
	printf("ft_strlcat = %lu\n", ft_strlcat(h, "12345", 5));

	char i[10];
	printf("strlcat = %lu\n", strlcat(i, "Hello", 0));
	printf("ft_strlcat = %lu\n", ft_strlcat(i, "Hello", 0));

	return (0);
}
