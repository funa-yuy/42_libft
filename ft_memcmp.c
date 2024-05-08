/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:15:48 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/08 21:40:57 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "ABCDE";
	printf("memcmp  %s:ABCDE = %d\n", a, memcmp(a, "ABCDE", 4));
	printf("ft_memcmp  %s:ABCDE = %d\n", a, ft_memcmp(a, "ABCDE", 4));
	printf("memcmp  %s:ABDDD = %d\n", a, memcmp(a, "ABDDD", 4));
	printf("ft_memcmp  %s:ABDDD = %d\n", a, ft_memcmp(a, "ABDDD", 4));
	printf("memcmp  %s:ABC = %d\n", a, memcmp(a, "ABC", 4));
	printf("ft_memcmp  %s:ABC = %d\n", a, ft_memcmp(a, "ABC", 4));
	printf("memcmp  %s:ADD = %d\n", a, memcmp(a, "ADD", 4));
	printf("ft_memcmp  %s:ADD = %d\n", a, ft_memcmp(a, "ADD", 4));
	printf("memcmp  %s:ABC = %d\n", a, memcmp(a, "ABC", 2));
	printf("ft_memcmp  %s:ABC = %d\n", a, ft_memcmp(a, "ABC", 2));
	printf("memcmp  %s:ADD = %d\n", a, memcmp(a, "ADD", 2));
	printf("ft_memcmp  %s:ADD = %d\n", a, ft_memcmp(a, "ADD", 2));
	printf("memcmp  %s:A = %d\n", a, memcmp(a, "A", 3));
	printf("ft_memcmp  %s:A = %d\n", a, ft_memcmp(a, "A", 3));
	printf("memcmp  %s:E = %d\n", a, memcmp(a, "E", 3));
	printf("ft_memcmp  %s:E = %d\n", a, ft_memcmp(a, "E", 3));
	printf("memcmp  %s:A = %d\n", a, memcmp(a, "A", 1));
	printf("ft_memcmp  %s:A = %d\n", a, ft_memcmp(a, "A", 1));
	printf("memcmp  %s:E = %d\n", a, memcmp(a, "E", 1));
	printf("ft_memcmp  %s:E = %d\n", a, ft_memcmp(a, "E", 1));

	char b[] = "H";
	printf("\nmemcmp  %s:Hello = %d\n", b, memcmp(b, "Hello", 4));
	printf("ft_memcmp  %s:Hello = %d\n", b, ft_memcmp(b, "Hello", 4));
	printf("memcmp  %s:HELLO = %d\n", b, memcmp(b, "HELLO", 8));
	printf("ft_memcmp  %s:HELLO = %d\n", b, ft_memcmp(b, "HELLO", 8));
	printf("memcmp  %s:H = %d\n", b, memcmp(b, "H", 3));
	printf("ft_memcmp  %s:H = %d\n", b, ft_memcmp(b, "H", 3));
	printf("memcmp  %s:H = %d\n", b, memcmp(b, "H", 1));
	printf("ft_memcmp  %s:H = %d\n", b, ft_memcmp(b, "H", 1));
	printf("memcmp  %s:H = %d\n", b, memcmp(b, "H", 0));
	printf("ft_memcmp  %s:H = %d\n", b, ft_memcmp(b, "H", 0));
	printf("memcmp  %s: = %d\n", b, memcmp(b, "", 1));
	printf("ft_memcmp  %s: = %d\n", b, ft_memcmp(b, "", 1));

	char c[] = "";
	printf("\nmemcmp  %s:Hello = %d\n", c, memcmp(c, "Hello", 4));
	printf("ft_memcmp  %s:Hello = %d\n", c, ft_memcmp(c, "Hello", 4));
	printf("memcmp  %s:H = %d\n", c, memcmp(c, "H", 1));
	printf("ft_memcmp  %s:H = %d\n", c, ft_memcmp(c, "H", 1));
	printf("memcmp  %s:H = %d\n", c, memcmp(c, "", 0));
	printf("ft_memcmp  %s:H = %d\n", c, ft_memcmp(c, "", 0));
	printf("memcmp  %s: = %d\n", c, memcmp(c, "", 1));
	printf("ft_memcmp  %s: = %d\n", c, ft_memcmp(c, "", 1));

	char d[] = " ";
	printf("\nmemcmp  %s:Hello = %d\n", d, memcmp(d, "Hello", 4));
	printf("ft_memcmp  %s:Hello = %d\n", d, ft_memcmp(d, "Hello", 4));
	printf("memcmp  %s:H = %d\n", d, memcmp(d, "12 34 56", 5));
	printf("ft_memcmp  %s:H = %d\n", d, ft_memcmp(d, "12 34 56", 5));
	printf("memcmp  %s:H = %d\n", d, memcmp(d, "", 0));
	printf("ft_memcmp  %s:H = %d\n", d, ft_memcmp(d, "", 0));
	printf("memcmp  %s: = %d\n", d, memcmp(d, " ", 1));
	printf("ft_memcmp  %s: = %d\n", d, ft_memcmp(d, " ", 1));

	char e[] = "Hel\0lo";
	printf("\nmemcmp  %s:Hello = %d\n", e, memcmp(e, "Hello", 5));
	printf("ft_memcmp  %s:Hello = %d\n", e, ft_memcmp(e, "Hello", 5));
	printf("memcmp  %s:%s = %d\n", e, e, memcmp(e, e, 6));
	printf("ft_memcmp  %s:%s = %d\n", e, e, ft_memcmp(e, e, 6));
	printf("memcmp  %s:12 34 56 = %d\n", e, memcmp(e, "12 34 56", 5));
	printf("ft_memcmp  %s:12 34 56H = %d\n", e, ft_memcmp(e, "12 34 56", 5));
	printf("memcmp  %s: = %d\n", e, memcmp(e, "", 0));
	printf("ft_memcmp  %s: = %d\n", e, ft_memcmp(e, "", 0));
	printf("memcmp  %s:  = %d\n", e, memcmp(e, " ", 1));
	printf("ft_memcmp  %s:  = %d\n", e, ft_memcmp(e, " ", 1));

	return (0);
}
