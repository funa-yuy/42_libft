/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:29:59 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/08 21:55:03 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(needle[0] == '\0')
		return ((char *)haystack);

	while(len > 0 &&  haystack[j] != '\0')
	{
		while(len > 0 && haystack[j + i] == needle[i])
		{
			if(needle[i + 1] == '\0')
				return ((char *)haystack);
			i++;
			len--;
		}
		len--;
	}

	return (NULL);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char q[] = "ABCDE";
	printf("strnstr = %s\n", strnstr(q, "BC", 4));

	char a[] = "ABCDE";
	printf("strnstr  %s:ABCDE = %s\n", a, strnstr(a, "ABCDE", 6));
	printf("ft_strnstr  %s:ABCDE = %s\n", a, ft_strnstr(a, "ABCDE", 6));
		printf("strnstr  %s:ABCDE = %s\n", a, strnstr(a, "ABCDE", 4));
	printf("ft_strnstr  %s:ABCDE = %s\n", a, ft_strnstr(a, "ABCDE", 4));
	printf("strnstr  %s:ABDDD = %s\n", a, strnstr(a, "ABDDD", 4));
	printf("ft_strnstr  %s:ABDDD = %s\n", a, ft_strnstr(a, "ABDDD", 4));
	printf("strnstr  %s:ABC = %s\n", a, strnstr(a, "ABC", 4));
	printf("ft_strnstr  %s:ABC = %s\n", a, ft_strnstr(a, "ABC", 4));
	printf("strnstr  %s:ADD = %s\n", a, strnstr(a, "ADD", 4));
	printf("ft_strnstr  %s:ADD = %s\n", a, ft_strnstr(a, "ADD", 4));
	printf("strnstr  %s:ABC = %s\n", a, strnstr(a, "ABC", 2));
	printf("ft_strnstr  %s:ABC = %s\n", a, ft_strnstr(a, "ABC", 2));
	printf("strnstr  %s:ADD = %s\n", a, strnstr(a, "ADD", 2));
	printf("ft_strnstr  %s:ADD = %s\n", a, ft_strnstr(a, "ADD", 2));
	printf("strnstr  %s:A = %s\n", a, strnstr(a, "A", 3));
	printf("ft_strnstr  %s:A = %s\n", a, ft_strnstr(a, "A", 3));
	printf("strnstr  %s:E = %s\n", a, strnstr(a, "E", 5));
	printf("ft_strnstr  %s:E = %s\n", a, ft_strnstr(a, "E", 5));
	printf("strnstr  %s:A = %s\n", a, strnstr(a, "A", 1));
	printf("ft_strnstr  %s:A = %s\n", a, ft_strnstr(a, "A", 1));
	printf("strnstr  %s:E = %s\n", a, strnstr(a, "E", 1));
	printf("ft_strnstr  %s:E = %s\n", a, ft_strnstr(a, "E", 1));

	char b[] = "H";
	printf("\nstrnstr  %s:Hello = %s\n", b, strnstr(b, "Hello", 4));
	printf("ft_strnstr  %s:Hello = %s\n", b, ft_strnstr(b, "Hello", 4));
	printf("strnstr  %s:HELLO = %s\n", b, strnstr(b, "HELLO", 8));
	printf("ft_strnstr  %s:HELLO = %s\n", b, ft_strnstr(b, "HELLO", 8));
	printf("strnstr  %s:H = %s\n", b, strnstr(b, "H", 3));
	printf("ft_strnstr  %s:H = %s\n", b, ft_strnstr(b, "H", 3));
	printf("strnstr  %s:H = %s\n", b, strnstr(b, "H", 1));
	printf("ft_strnstr  %s:H = %s\n", b, ft_strnstr(b, "H", 1));
	printf("strnstr  %s:H = %s\n", b, strnstr(b, "H", 0));
	printf("ft_strnstr  %s:H = %s\n", b, ft_strnstr(b, "H", 0));
	printf("strnstr  %s: = %s\n", b, strnstr(b, "", 1));
	printf("ft_strnstr  %s: = %s\n", b, ft_strnstr(b, "", 1));

	char c[] = "";
	printf("\nstrnstr  %s:Hello = %s\n", c, strnstr(c, "Hello", 4));
	printf("ft_strnstr  %s:Hello = %s\n", c, ft_strnstr(c, "Hello", 4));
	printf("strnstr  %s:H = %s\n", c, strnstr(c, "H", 1));
	printf("ft_strnstr  %s:H = %s\n", c, ft_strnstr(c, "H", 1));
	printf("strnstr  %s:H = %s\n", c, strnstr(c, "", 0));
	printf("ft_strnstr  %s:H = %s\n", c, ft_strnstr(c, "", 0));
	printf("strnstr  %s: = %s\n", c, strnstr(c, "", 1));
	printf("ft_strnstr  %s: = %s\n", c, ft_strnstr(c, "", 1));

	char d[] = " ";
	printf("\nstrnstr  %s:Hello = %s\n", d, strnstr(d, "Hello", 4));
	printf("ft_strnstr  %s:Hello = %s\n", d, ft_strnstr(d, "Hello", 4));
	printf("strnstr  %s:12 34 56 = %s\n", d, strnstr(d, "12 34 56", 5));
	printf("ft_strnstr  %s:12 34 56 = %s\n", d, ft_strnstr(d, "12 34 56", 5));
	printf("strnstr  %s: = %s\n", d, strnstr(d, "", 0));
	printf("ft_strnstr  %s: = %s\n", d, ft_strnstr(d, "", 0));
	printf("strnstr  %s:  = %s\n", d, strnstr(d, " ", 1));
	printf("ft_strnstr  %s:  = %s\n", d, ft_strnstr(d, " ", 1));

	char e[] = "Hel\0lo";
	printf("\nstrnstr  %s:Hello = %s\n", e, strnstr(e, "Hello", 5));
	printf("ft_strnstr  %s:Hello = %s\n", e, ft_strnstr(e, "Hello", 5));
	printf("strnstr  %s:%s = %s\n", e, e, strnstr(e, e, 6));
	printf("ft_strnstr  %s:%s = %s\n", e, e, ft_strnstr(e, e, 6));
	printf("strnstr  %s:H = %s\n", e, strnstr(e, "12 34 56", 5));
	printf("ft_strnstr  %s:H = %s\n", e, ft_strnstr(e, "12 34 56", 5));
	printf("strnstr  %s:H = %s\n", e, strnstr(e, "", 0));
	printf("ft_strnstr  %s:H = %s\n", e, ft_strnstr(e, "", 0));
	printf("strnstr  %s: = %s\n", e, strnstr(e, " ", 1));
	printf("ft_strnstr  %s: = %s\n", e, ft_strnstr(e, " ", 1));

	return (0);
}
