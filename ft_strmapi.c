/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:42:19 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 22:33:48 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

// ↓消す
char f1(unsigned int	i, char const s)
{

	return (i + s);
}

char f2(unsigned int	i, char const s)
{

	return (i%2 + s);
}
// ↑消す

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

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*dst;
	unsigned int	i;
	size_t		len;

	dst = NULL;
	len = ft_strlen(s);
	i = 0;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while(s[i] != '\0')
	{
		dst[i] = f(i , s[i]);
		i++;
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	printf("ft_strmapi = %s\n", ft_strmapi("00000000", f1));
	printf("ft_strmapi = %s\n", ft_strmapi("00000000", f2));

	return (0);
}
