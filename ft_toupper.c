/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:35:24 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/24 08:45:50 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}


#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("toupper = %c\n", toupper('a'));
	printf("ft_toupper = %c\n", ft_toupper('a'));

	printf("toupper = %c\n", toupper('A'));
	printf("ft_toupper = %c\n", ft_toupper('A'));

	printf("toupper = %c\n", toupper('z'));
	printf("ft_toupper = %c\n", ft_toupper('z'));

	printf("toupper = %c\n", toupper('Z'));
	printf("ft_toupper = %c\n", ft_toupper('Z'));

	printf("toupper = %c\n", toupper('1'));
	printf("ft_toupper = %c\n", ft_toupper('1'));

	printf("toupper = %c\n", toupper('9'));
	printf("ft_toupper = %c\n", ft_toupper('9'));

	printf("toupper = %c\n", toupper('\0'));
	printf("ft_toupper = %c\n", ft_toupper('\0'));

	printf("toupper = %c\n", toupper(','));
	printf("ft_toupper = %c\n", ft_toupper(','));

	printf("toupper = %c\n", toupper(' '));
	printf("ft_toupper = %c\n", ft_toupper(' '));

	printf("toupper = %c\n", toupper(0));
	printf("ft_toupper = %c\n", ft_toupper(0));

	printf("toupper = %c\n", toupper(127));
	printf("ft_toupper = %c\n", ft_toupper(127));
	return (0);
}
