/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:51:08 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 21:34:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

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

char *ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	start;
	size_t		len;
	int	x;

	dst = NULL;
	i = 0;
	start = 0;
	len = ft_strlen(s1);
	x = 1;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while(s1[start] != '\0' && x == 1)
	{
		i = 0;
		x = 0;
		while(set[i] != '\0')
		{
			if(set[i] == s1[start])
				x = 1;
			i++;
		}
		start++;
	}

	while(start != len && x == 0)
	{
		i = 0;
		x = 1;
		while(set[i] != '\0')
		{
			if(set[i] == s1[len - 1])
				x = 0;
			i++;
		}
		len--;
	}

	i = 0;
	len = len - (start - 1);
	while(len >= i)
	{
		dst[i] = s1[start - 1];
		start++;
		i++;
	}

	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	printf("ft_strtrim = %s\n", ft_strtrim("Hello, World!", "Hello"));
	printf("ft_strtrim = %s\n", ft_strtrim("1234A2AA22331122", "1234"));
	printf("ft_strtrim = %s\n", ft_strtrim("A2AA22331122", "1234"));
	printf("ft_strtrim = %s\n", ft_strtrim("A2AA22331122", "BCDF"));
	printf("ft_strtrim = %s\n", ft_strtrim("", ""));
	printf("ft_strtrim = %s\n", ft_strtrim(" '' ' ' =", " "));

	return (0);
}
