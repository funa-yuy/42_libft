/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:57:16 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/17 20:14:51 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = '\0';
	}
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	printf("元 = 「%s」\n", a);
	bzero(a, 2);
	for(int i = 0; i < 5; i++)
		printf("%d = %c\n", i, a[i]);
	ft_bzero(a, 2);
	for(int i = 0; i < 5; i++)
		printf("%d = %c\n", i, a[i]);

	char	b[] = "wor ld!";
	printf("元 = 「%s」\n", b);
	bzero(b, 3);
	for(int i = 0; i < 7; i++)
		printf("%d = %c\n", i, b[i]);
	ft_bzero(b, 3);
	for(int i = 0; i < 7; i++)
		printf("%d = %c\n", i, b[i]);

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	bzero(c, (0));
	for(int i = 0; i < 5; i++)
		printf("%d = %c\n", i, c[i]);
	ft_bzero(c, 0);
	for(int i = 0; i < 5; i++)
		printf("%d = %c\n", i, c[i]);

	return (0);
}
