/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:47:05 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/30 13:17:39 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("strchr = %s\n", strchr(a, 'e'));
	printf("ft_strchr = %s\n", ft_strchr(a, 'e'));

	char	b[] = "12345";
	printf("strchr = %s\n", strchr(b, '5'));
	printf("ft_strchr = %s\n", ft_strchr(b, '5'));

	char	c[] = "aaAAbbBB";
	printf("strchr = %s\n", strchr(c, 'A'));
	printf("ft_strchr = %s\n", ft_strchr(c, 'A'));

	char	d[] = "aaAAbbBB";
	printf("strchr = %s\n", strchr(d, 'b'));
	printf("ft_strchr = %s\n", ft_strchr(d, 'b'));

	char	e[] = "He^l\nlo";
	printf("strchr = %s\n", strchr(e, '\n'));
	printf("ft_strchr = %s\n", ft_strchr(e, '\n'));

	char	f[] = "He^l\nlo";
	printf("strchr = %s\n", strchr(f, '^'));
	printf("ft_strchr = %s\n", ft_strchr(f, '^'));

	char	g[] = "Hello";
	printf("strchr = %s\n", strchr(g, '0'));
	printf("ft_strchr = %s\n", ft_strchr(g, '0'));

	char	h[] = "Hello";
	printf("strchr = %s\n", strchr(h, 'L'));
	printf("ft_strchr = %s\n", ft_strchr(h, 'L'));

	char	i[] = "";
	printf("strchr = %s\n", strchr(i, '\0'));
	printf("ft_strchr = %s\n", ft_strchr(i, '\0'));

	char	j[] = "\0";
	printf("strchr = %s\n", strchr(j, '0'));
	printf("ft_strchr = %s\n", ft_strchr(j, '0'));

	char	k[] = "Hell o";
	printf("strchr = %s\n", strchr(k, 32));
	printf("ft_strchr = %s\n", ft_strchr(k, 32));

	char	l[] = "A";
	printf("strchr = %s\n", strchr(l, 'A'));
	printf("ft_strchr = %s\n", ft_strchr(l, 'A'));

	char	m[] = "12344321";
	printf("strchr = %s\n", strchr(m, '3'));
	printf("ft_strchr = %s\n", ft_strchr(m, '3'));

	return (0);
}
