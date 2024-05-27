/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:17:27 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/27 21:40:26 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_substr_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	dst = NULL;
	i = 0;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while(len > i)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static unsigned int	ft_substr_len(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

#include <stdio.h>
char **ft_split(char const *s, char c)
{
	char	**dst;
	int	count;
	int	i;

	count = 0;
	i = 0;
	dst = malloc((ft_substr_count(s, c) + 1) * sizeof(char *));
	if (!dst || !s)
		return (NULL);
	while(s[i] != '\0')
	{
		if(s[i] != c)
		{
			dst[count] = ft_substr(s, i, ft_substr_len(&s[i], c));
			if(!dst[count])
				return (ft_free(dst, count));
			count++;
			i += ft_substr_len(&s[i], c);
		}
		else
			i++;
	}
	dst[count] = 0;
	return (dst);
}

int	main(void)
{
	printf("ft_split: %c", ft_split("111A222A333", 'A'));
	ft_split("111A222A333", 'A');
	ft_split("HEEEL HEL GO TO HEEE", 'H');
	ft_split("HEEEL HEL GO TO HEEE", ' ');
	ft_split("\n \\0\\ \t \v\r\f\\  ", '\\');
	printf("ft_split: %s\n",ft_split("111A222A333", 'A'));

	return (0);
}
