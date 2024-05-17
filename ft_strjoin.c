/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:48:55 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/17 23:01:02 by mfunakos         ###   ########.fr       */
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

char *ft_strjoin(char const *s1, char const *s2)
{
	int	len_s1;
	int	len_s2;
	int	i;
	char	*dst;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	dst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if(!dst)
		return (NULL);
	while(i < len_s1)
	{
		dst[i] = s1[i];
		i++;
	}
	while(i < len_s1 + len_s2)
	{
		dst[i] = s2[i - len_s1];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	printf("ft_strjoin = %s\n", ft_strjoin("0123456789", "abcdef"));




	return (0);
}
