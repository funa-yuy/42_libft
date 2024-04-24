/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:40:54 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/24 03:48:39 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	const unsigned char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = src;

	if(dst == NULL || src == NULL)
		return (NULL);
	if(dst > src)
	{
		i = len;
		while (i-- > 0)
			ptr_dst[i] = ptr_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (ptr_dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("元 = 「%s」\n", a);
	printf("memmove = 「%s」\n", (char *)memmove(a, "ABCD", 4));
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(a, "ABCD", 4));

	char	b[] = "wor ld!";
	printf("\n元 = 「%s」\n", b);
	printf("memmove = 「%s」\n", (char *)memmove(b, "tttt", 2));
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(b, "tttt", 2));

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	printf("memmove = 「%s」\n", (char *)memmove(c, "1234", 3));
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(c, "1234", 3));

	char	d[] = "123456789";
	printf("\n元 = 「%s」\n", d);
	printf("memmove = 「%s」\n", (char *)memmove(d, "123456789", 10));
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(d, "123456789", 10));

	char	e[] = "abcdefg";
	printf("\n元 = 「%s」\n", e);
	printf("memmove = 「%s」\n", (char *)memmove(e, "123456789", 0));
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(e, "123456789", 0));

	char	f[] = "123456";
	printf("\n元 = 「%s」\n", f);
	printf("memmove = 「%s」\n", (char *)memmove(f, f, 3));
	char	f_ft[] = "123456";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(f_ft, f_ft, 3));

	char	g[] = "123456";
	printf("\n元 = 「%s」\n", g);
	printf("memmove = 「%s」\n", (char *)memmove(g +2, g, 4));
	char	g_ft[] = "123456";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(g_ft +2, g_ft, 4));

	char	h[] = "123456";
	printf("\n元 = 「%s」\n", h);
	printf("memmove = 「%s」\n", (char *)memmove(h, h + 3, 5));
	char	h_ft[] = "123456";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(h_ft, h_ft + 3, 5));

	char	i[] = "12345";
	printf("\n元 = 「%s」\n", i);
	printf("memmove = 「%s」\n", (char *)memmove(i, "\0", 6));
	char	i_ft[] = "12345";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(i_ft, "\0", 6));

	char	j[10] = "\0";
	printf("\n元 = 「%s」\n", j);
	printf("memmove = 「%s」\n", (char *)memmove(j, "123", 6));
	char	j_ft[10] = "\0";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(j_ft, "123", 6));

	char	k[10] = "\0";
	printf("\n元 = 「%s」\n", k);
	printf("memmove = 「%s」\n", (char *)memmove(k, "\0", 6));
	char	k_ft[10] = "\0";
	printf("ft_memmove = 「%s」\n", (char *)ft_memmove(k_ft, "\0", 6));


	return (0);
}
