/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:19:09 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/30 13:59:36 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "ABCDE";
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ABCDE", 4));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ABCDE", 4));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ABDDD", 4));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ABDDD", 4));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ABC", 4));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ABC", 4));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ADD", 4));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ADD", 4));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ABC", 2));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ABC", 2));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "ADD", 2));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "ADD", 2));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "A", 3));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "A", 3));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "E", 3));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "E", 3));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "A", 1));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "A", 1));
	printf("strncmp  %s:Hello = %d\n", a, strncmp(a, "E", 1));
	printf("ft_strncmp  %s:Hello = %d\n", a, ft_strncmp(a, "E", 1));

	char b[] = "H";
	printf("\nstrncmp  %s:Hello = %d\n", b, strncmp(b, "Hello", 4));
	printf("ft_strncmp  %s:Hello = %d\n", b, ft_strncmp(b, "Hello", 4));
	printf("strncmp  %s:HELLO = %d\n", b, strncmp(b, "HELLO", 8));
	printf("ft_strncmp  %s:HELLO = %d\n", b, ft_strncmp(b, "HELLO", 8));
	printf("strncmp  %s:H = %d\n", b, strncmp(b, "H", 3));
	printf("ft_strncmp  %s:H = %d\n", b, ft_strncmp(b, "H", 3));
	printf("strncmp  %s:H = %d\n", b, strncmp(b, "H", 1));
	printf("ft_strncmp  %s:H = %d\n", b, ft_strncmp(b, "H", 1));
	printf("strncmp  %s:H = %d\n", b, strncmp(b, "H", 0));
	printf("ft_strncmp  %s:H = %d\n", b, ft_strncmp(b, "H", 0));
	printf("strncmp  %s: = %d\n", b, strncmp(b, "", 1));
	printf("ft_strncmp  %s: = %d\n", b, ft_strncmp(b, "", 1));

	char c[] = "";
	printf("\nstrncmp  %s:Hello = %d\n", c, strncmp(c, "Hello", 4));
	printf("ft_strncmp  %s:Hello = %d\n", c, ft_strncmp(c, "Hello", 4));
	printf("strncmp  %s:H = %d\n", c, strncmp(c, "H", 1));
	printf("ft_strncmp  %s:H = %d\n", c, ft_strncmp(c, "H", 1));
	printf("strncmp  %s:H = %d\n", c, strncmp(c, "", 0));
	printf("ft_strncmp  %s:H = %d\n", c, ft_strncmp(c, "", 0));
	printf("strncmp  %s: = %d\n", c, strncmp(c, "", 1));
	printf("ft_strncmp  %s: = %d\n", c, ft_strncmp(c, "", 1));

	char d[] = " ";
	printf("\nstrncmp  %s:Hello = %d\n", d, strncmp(d, "Hello", 4));
	printf("ft_strncmp  %s:Hello = %d\n", d, ft_strncmp(d, "Hello", 4));
	printf("strncmp  %s:H = %d\n", d, strncmp(d, "12 34 56", 5));
	printf("ft_strncmp  %s:H = %d\n", d, ft_strncmp(d, "12 34 56", 5));
	printf("strncmp  %s:H = %d\n", d, strncmp(d, "", 0));
	printf("ft_strncmp  %s:H = %d\n", d, ft_strncmp(d, "", 0));
	printf("strncmp  %s: = %d\n", d, strncmp(d, " ", 1));
	printf("ft_strncmp  %s: = %d\n", d, ft_strncmp(d, " ", 1));

	return (0);
}
