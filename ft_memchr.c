/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:03:02 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/30 15:22:30 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	c &= 0xff;
	str = (unsigned char *)s;
	if(str == NULL)
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
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("memchr = %s\n", memchr(a, 'e', 4));
	printf("ft_memchr = %s\n", ft_memchr(a, 'e', 4));

	char	b[] = "12345";
	printf("memchr = %s\n", memchr(b, '4' , 3));
	printf("ft_memchr = %s\n", ft_memchr(b, '4', 3));

	char	c[] = "12345";
	printf("memchr = %s\n", memchr(c, '4', 4));
	printf("ft_memchr = %s\n", ft_memchr(c, '4', 4));

	char	d[] = "12345";
	printf("memchr = %s\n", memchr(d, '6', 5));
	printf("ft_memchr = %s\n", ft_memchr(d, '6', 5));

	char	e[] = "He^l\nlo";
	printf("memchr = %s\n", memchr(e, '\n', 5));
	printf("ft_memchr = %s\n", ft_memchr(e, '\n', 5));

	char	f[] = "He^l\nlo";
	printf("memchr = %s\n", memchr(f, '^', 5));
	printf("ft_memchr = %s\n", ft_memchr(f, '^', 5));

	char	g[] = "Hello";
	printf("memchr = %s\n", memchr(g, '0', 0));
	printf("ft_memchr = %s\n", ft_memchr(g, '0', 0));

	char	h[] = "Hello";
	printf("memchr = %s\n", memchr(h, 'L', 5));
	printf("ft_memchr = %s\n", ft_memchr(h, 'L', 5));

	char	i[] = "";
	printf("memchr = %s\n", memchr(i, '\0', 2));
	printf("ft_memchr = %s\n", ft_memchr(i, '\0', 2));

	char	j[] = "\0";
	printf("memchr = %s\n", memchr(j, '0', 2));
	printf("ft_memchr = %s\n", ft_memchr(j, '0', 2));

	char	k[] = "Hell o";
	printf("memchr = %s\n", memchr(k, 32, 5));
	printf("ft_memchr = %s\n", ft_memchr(k, 32, 5));

	char	l[] = "A";
	printf("memchr = %s\n", memchr(l, 'A', 3));
	printf("ft_memchr = %s\n", ft_memchr(l, 'A', 3));

	char	m[] = "12344321";
	printf("memchr = %s\n", memchr(m, '3', 6));
	printf("ft_memchr = %s\n", ft_memchr(m, '3', 6));

	char	n[] = "0123456789ABCDEF";
	printf("memchr = %s\n", memchr(n, 'A', -12));
	printf("ft_memchr = %s\n", ft_memchr(n, 'A', -12));

	char	o[] = "0123456789ABCDEF";
	o[2] = -120;
	printf("memchr = %s\n", memchr(o, -120, 5));
	printf("ft_memchr = %s\n", ft_memchr(o, -120, 5));

	return (0);
}
