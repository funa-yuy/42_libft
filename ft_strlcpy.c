/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:32:32 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/24 10:07:34 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{

	unsigned int	i;
	size_t	len;
	// int	count;


	// src_len = ft_strlen(src);
	len = 0;
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
	while(src[i] != '\0')
		i++;
	return (i);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[4];
	printf("strlcpy = %lu\n", strlcpy(a, "Hello", 4));
	char a_ft[4];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(a_ft, "Hello", 4));

	char b[15];
	printf("strlcpy = %lu\n", strlcpy(b, "Hello", 10));
	char b_ft[15];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(b_ft, "Hello", 10));

	char c[6];
	printf("strlcpy = %lu\n", strlcpy(c, "Hello", 6));
	char c_ft[6];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(c_ft, "Hello", 6));

	char d[4];
	printf("strlcpy = %lu\n", strlcpy(d, "Hel", 4));
	char d_ft[4];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(d_ft, "Hel", 4));

	char e[5];
	printf("strlcpy = %lu\n", strlcpy(e, "HelloWorld", 3));
	char e_ft[5];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(e_ft, "HelloWorld", 3));

	char f[10];
	printf("strlcpy = %lu\n", strlcpy(f, "", 10));
	char f_ft[10];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(f_ft, "", 10));

	char g[10];
	printf("strlcpy = %lu\n", strlcpy(g, "\0", 10));
	char g_ft[10];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(g_ft, "\0", 10));

	char h[5] = "\0";
	printf("strlcpy = %lu\n", strlcpy(h, "12345", 5));
	char h_ft[5] = "\0";
	printf("ft_strlcpy = %lu\n", ft_strlcpy(h_ft, "12345", 5));

	char i[10];
	printf("strlcpy = %lu\n", strlcpy(i, "Hello", 0));
	char i_ft[10];
	printf("ft_strlcpy = %lu\n", ft_strlcpy(i_ft, "Hello", 0));

	return (0);
}
