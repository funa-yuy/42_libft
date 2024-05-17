/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:16:36 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/13 21:43:54 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*ptr_dst;
	const unsigned char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	while (n > i)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (ptr_dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("元 = 「%s」\n", a);
	printf("memcpy = 「%s」\n", (char *)memcpy(a, "ABCD", 4));
	char	a_ft[] = "Hello";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(a_ft, "ABCD", 4));

	char	b[] = "wor ld!";
	printf("\n元 = 「%s」\n", b);
	printf("memcpy = 「%s」\n", (char *)memcpy(b, "tttt", 2));
	char	b_ft[] = "wor ld!";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(b_ft, "tttt", 2));

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	printf("memcpy = 「%s」\n", (char *)memcpy(c, "1234", 3));
	char	c_ft[] = "#\t%&\n";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(c_ft, "1234", 3));

	char	d[] = "123456789";
	printf("\n元 = 「%s」\n", d);
	printf("memcpy = 「%s」\n", (char *)memcpy(d, "123456789", 10));
	char	d_ft[] = "123456789";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(d_ft, "123456789", 10));

	char	e[] = "abcdefg";
	printf("\n元 = 「%s」\n", e);
	printf("memcpy = 「%s」\n", (char *)memcpy(e, "123456789", 0));
	char	e_ft[] = "abcdefg";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(e_ft, "123456789", 0));

	char	f[] = "123456";
	printf("\n元 = 「%s」\n", f);
	printf("memcpy = 「%s」\n", (char *)memcpy(f, f, 3));
	char	f_ft[] = "123456";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(f_ft, f_ft, 3));

	char	g[] = "123456";
	printf("\n元 = 「%s」\n", g);
	printf("memcpy = 「%s」\n", (char *)memcpy(g +2, g, 4));
	char	g_ft[] = "123456";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(g_ft +2, g_ft, 4));

	char	h[] = "123456";
	printf("\n元 = 「%s」\n", h);
	printf("memcpy = 「%s」\n", (char *)memcpy(h, h + 3, 5));
	char	h_ft[] = "123456";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(h_ft, h_ft + 3, 5));

	char	i[10] = "\0";
	printf("\n元 = 「%s」\n", i);
	printf("memcpy = 「%s」\n", (char *)memcpy(i, "123", 6));
	char	i_ft[10] = "\0";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(i_ft, "123", 6));

	char	j[] = "12345";
	printf("\n元 = 「%s」\n", j);
	printf("memcpy = 「%s」\n", (char *)memcpy(j, "\0", 6));
	char	j_ft[] = "12345";
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(j_ft, "\0", 6));

	return (0);
}
