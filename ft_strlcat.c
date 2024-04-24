/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 03:52:36 by miyuu             #+#    #+#             */
/*   Updated: 2024/04/24 02:56:57 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <string.h>
#include <stdio.h>

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
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j =  dst_len;
	i = 0;
	if(dst_len >= dstsize)
		return (dstsize + src_len);
	if(dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] != '\0' && dst_len + i < dstsize - 1)
		{
			dst[j] = src [i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dst_len + src_len);
}


int	main(void)
{
	char a[20] = "1234";
	printf("strlcat = %lu\n", strlcat(a, "Hello", 4));
	char a_ft[20] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(a_ft, "Hello", 4));

	char b[20] = "1234";
	printf("strlcat = %lu\n", strlcat(b, "Hello", 10));
	char b_ft[20] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(b_ft, "Hello", 10));

	char c[20] = "1234";
	printf("strlcat = %lu\n", strlcat(c, "Hello", 6));
	char c_ft[20] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(c_ft, "Hello", 6));

	char d[5] = "1234";
	printf("strlcat = %lu\n", strlcat(d, "Hel", 4));
	char d_ft[5] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(d_ft, "Hel", 4));

	char e[20] = "1234";
	printf("strlcat = %lu\n", strlcat(e, "HelloWorld", 5));
	char e_ft[20] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(e_ft, "HelloWorld", 5));

	char f[20] = "12345";
	printf("strlcat = %lu\n", strlcat(f, "", 10));
	char f_ft[20] = "12345";
	printf("ft_strlcat = %lu\n", ft_strlcat(f_ft, "", 10));

	char g[20] = "1234\0";
	printf("strlcat = %lu\n", strlcat(g, "\0", 10));
	char g_ft[20] = "1234\0";
	printf("ft_strlcat = %lu\n", ft_strlcat(g_ft, "\0", 10));

	char h[20] = "";
	printf("strlcat = %lu\n", strlcat(h, "123", 5));
	char h_ft[20] = "";
	printf("ft_strlcat = %lu\n", ft_strlcat(h_ft, "123", 5));

	char i[20] = "1234567";
	printf("strlcat = %lu\n", strlcat(i, "Hello", 0));
	char i_ft[20] = "1234567";
	printf("ft_strlcat = %lu\n", ft_strlcat(i_ft, "Hello", 0));

	char j[20] = "123\045";
	printf("strlcat = %lu\n", strlcat(j, "Hello", 10));
	char j_ft[20] = "123\045";
	printf("ft_strlcat = %lu\n", ft_strlcat(j_ft, "Hello", 10));

	char k[20] = "1234";
	printf("strlcat = %lu\n", strlcat(k, "H\0ello", 10));
	char k_ft[20] = "1234";
	printf("ft_strlcat = %lu\n", ft_strlcat(k_ft, "H\0ello", 10));

	return (0);
}
