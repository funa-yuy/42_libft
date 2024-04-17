/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:48:02 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/17 20:30:36 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (len > i)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("元 = 「%s」\n", a);
	printf("memset = 「%s」\n", memset(a, 'A', 2));
	printf("ft_memset = 「%s」\n", ft_memset(a, 'A', 2));

	char	b[] = "wor ld!";
	printf("\n元 = 「%s」\n", b);
	printf("memset = 「%s」\n", memset(b, ' ', 2));
	printf("ft_memset = 「%s」\n", ft_memset(b, ' ', 2));

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	printf("memset = 「%s」\n", memset(c, '@', 2));
	printf("ft_memset = 「%s」\n", ft_memset(c, '@', 2));

	return (0);
}
