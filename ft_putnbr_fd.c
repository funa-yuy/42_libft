/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:12:00 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/17 22:21:21 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
	ft_putchar_fd('1', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('2', 2);
	ft_putchar_fd('0', 0);
	return (0);
}
