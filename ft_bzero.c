/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:57:16 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 05:59:21 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *	ft_bzero(void *b, int c, size_t len)
{
	unsigned char *ptr = b;
	size_t	i;

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
	printf("bzero = 「%s」\n", bzero(a, 'A', 2));
	printf("ft_bzero = 「%s」\n", ft_bzero(a, 'A', 2));

	char	b[] = "wor ld!";
	printf("\n元 = 「%s」\n", b);
	printf("bzero = 「%s」\n", bzero(b, ' ', 2));
	printf("ft_bzero = 「%s」\n", ft_bzero(b, ' ', 2));

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	printf("bzero = 「%s」\n", bzero(c, '@', 2));
	printf("ft_bzero = 「%s」\n", ft_bzero(c, '@', 2));

	return (0);
}
