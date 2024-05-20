/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:04:16 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 23:38:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	sum(unsigned int n, int fd)
{
	if (n / 10 != 0)
	{
		sum(n / 10, fd);
	}
	ft_putchar_fd('0' + n % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	sum((unsigned int)n, fd);
}

#include <stdio.h>

int	main(void)
{
	ft_putnbr_fd(123456, 1);
	printf("\n");
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-98765, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");

	// printf("(%d)", n - 1);
	return (0);
}
