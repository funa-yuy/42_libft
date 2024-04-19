/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:28:36 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/20 04:59:57 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello, World!";
	char	*t = "\n World! \n";
	char	*r = "01234 &\t@!";

	printf("strlen(%s) = %lu\n", s, strlen(s));
	printf("ft_strlen(%s) = %d\n", s, ft_strlen(s));

	printf("strlen(%s) = %lu\n", t, strlen(t));
	printf("ft_strlen(%s) = %d\n", t, ft_strlen(t));

	printf("strlen(%s) = %lu\n", r, strlen(r));
	printf("ft_strlen(%s) = %d\n", r, ft_strlen(r));

	return (0);
}
