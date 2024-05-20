/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:34:18 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 22:53:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// ↓消す
#include <stdio.h>
void f1(unsigned int	i, char *s)
{

	printf("%c", i + *s);
}

void f2(unsigned int	i, char *s)
{
	printf("%c", i%2 + *s);
}
// ↑消す

void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	// char	*dst;
	unsigned int	i;

	// dst = NULL;
	i = 0;
	while(s[i] != '\0')
	{
		f(i , s);
		i++;
	}

}

int	main(void)
{
	ft_striteri("00000000", f1);
	printf("\n");
	ft_striteri("00000000", f2);

	return (0);
}
