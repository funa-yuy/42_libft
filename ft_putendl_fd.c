/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:00:09 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/20 23:03:41 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	while(*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("Hello, World!", 1);
	ft_putendl_fd("0123\0004567", 1);
	ft_putendl_fd("ABCD\tDE", 1);
	ft_putendl_fd("Hello, World!", 2);
	ft_putendl_fd("0123\0004567", 2);
	ft_putendl_fd("ABCD\tDE", 2);
	ft_putendl_fd("Hello, World!", 0);
	ft_putendl_fd("0123\0004567", 0);
	ft_putendl_fd("ABCD\tDE", 0);

	return (0);
}
