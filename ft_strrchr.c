/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:47:05 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/24 10:07:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *result;

	result = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			result = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)result);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("strrchr = %s\n", strrchr(a, 'e'));
	printf("ft_strrchr = %s\n", ft_strrchr(a, 'e'));

	char	b[] = "12345";
	printf("strrchr = %s\n", strrchr(b, '5'));
	printf("ft_strrchr = %s\n", ft_strrchr(b, '5'));

	char	c[] = "aaAAbbBB";
	printf("strrchr = %s\n", strrchr(c, 'A'));
	printf("ft_strrchr = %s\n", ft_strrchr(c, 'A'));

	char	d[] = "aaAAbbBB";
	printf("strrchr = %s\n", strrchr(d, 'b'));
	printf("ft_strrchr = %s\n", ft_strrchr(d, 'b'));

	char	e[] = "He^l\nlo";
	printf("strrchr = %s\n", strrchr(e, '\n'));
	printf("ft_strrchr = %s\n", ft_strrchr(e, '\n'));

	char	f[] = "He^l\nlo";
	printf("strrchr = %s\n", strrchr(f, '^'));
	printf("ft_strrchr = %s\n", ft_strrchr(f, '^'));

	char	g[] = "Hello";
	printf("strrchr = %s\n", strrchr(g, '0'));
	printf("ft_strrchr = %s\n", ft_strrchr(g, '0'));

	char	h[] = "Hello";
	printf("strrchr = %s\n", strrchr(h, 'L'));
	printf("ft_strrchr = %s\n", ft_strrchr(h, 'L'));

	char	i[] = "";
	printf("strrchr = %s\n", strrchr(i, '\0'));
	printf("ft_strrchr = %s\n", ft_strrchr(i, '\0'));

	char	j[] = "\0";
	printf("strrchr = %s\n", strrchr(j, '0'));
	printf("ft_strrchr = %s\n", ft_strrchr(j, '0'));

	char	k[] = "Hell o";
	printf("strrchr = %s\n", strrchr(k, 32));
	printf("ft_strrchr = %s\n", ft_strrchr(k, 32));

	char	l[] = "A";
	printf("strrchr = %s\n", strrchr(l, 'A'));
	printf("ft_strrchr = %s\n", ft_strrchr(l, 'A'));

	char	m[] = "12344321";
	printf("strrchr = %s\n", strrchr(m, '3'));
	printf("ft_strrchr = %s\n", ft_strrchr(m, '3'));

	return (0);
}
