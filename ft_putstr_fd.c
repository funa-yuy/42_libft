/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:54:02 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 22:59:46 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	while(*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

#include <stdio.h>

int	main(void)
{
	ft_putstr_fd("Hello, World!\n", 1);
	ft_putstr_fd("0123\0004567\n", 1);
	printf("\n");
	ft_putstr_fd("ABCD\tDE\n", 1);
	ft_putstr_fd("Hello, World!\n", 2);
	ft_putstr_fd("0123\0004567\n", 2);
	printf("\n");
	ft_putstr_fd("ABCD\tDE\n", 2);
	ft_putstr_fd("Hello, World!\n", 0);
	ft_putstr_fd("0123\0004567\n", 0);
	printf("\n");
	ft_putstr_fd("ABCD\tDE\n", 0);
	return (0);
}
