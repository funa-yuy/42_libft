/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:41:22 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/24 08:46:53 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}


#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("tolower = %c\n", tolower('a'));
	printf("ft_tolower = %c\n", ft_tolower('a'));

	printf("tolower = %c\n", tolower('A'));
	printf("ft_tolower = %c\n", ft_tolower('A'));

	printf("tolower = %c\n", tolower('z'));
	printf("ft_tolower = %c\n", ft_tolower('z'));

	printf("tolower = %c\n", tolower('Z'));
	printf("ft_tolower = %c\n", ft_tolower('Z'));

	printf("tolower = %c\n", tolower('1'));
	printf("ft_tolower = %c\n", ft_tolower('1'));

	printf("tolower = %c\n", tolower('9'));
	printf("ft_tolower = %c\n", ft_tolower('9'));

	printf("tolower = %c\n", tolower('\0'));
	printf("ft_tolower = %c\n", ft_tolower('\0'));

	printf("tolower = %c\n", tolower(','));
	printf("ft_tolower = %c\n", ft_tolower(','));

	printf("tolower = %c\n", tolower(' '));
	printf("ft_tolower = %c\n", ft_tolower(' '));

	printf("tolower = %c\n", tolower(0));
	printf("ft_tolower = %c\n", ft_tolower(0));

	printf("tolower = %c\n", tolower(127));
	printf("ft_tolower = %c\n", ft_tolower(127));
	return (0);
}
