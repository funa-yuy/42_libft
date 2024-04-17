/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:40:54 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/17 20:54:17 by mfunakos         ###   ########.fr       */
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
	i = 0;
	while (len > i)
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

	return (0);
}
