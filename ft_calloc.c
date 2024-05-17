/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:57:06 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/17 22:06:22 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total_size;
	int	i;

	total_size = count * size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	// unsigned char *p = ptr;
	while (total_size > i)
	{
		ptr[i] = '0';
		i++;
	}
	return (ptr);
}

#include <stdio.h>

int main(void){

    int* ap;

    ap = ft_calloc(3, sizeof(int));
	// if(ap == NULL) {
    //   printf("メモリが確保できません\n");
    //   exit(EXIT_FAILURE);
   	// }
	ap[0] = 0;
	ap[1] = 0;
    ap[2] = 1;
    ap[3] = 1;
	printf("%p\n", &ap[0]);
	printf("%p\n", &ap[1]);
    printf("%p\n", &ap[2]);   // アドレスを表示
    printf("%p\n", &ap[3]);
    printf("%p\n", &ap[4]);
	printf("%d\n", ap[0]);
	printf("%d\n", ap[1]);
    printf("%d\n", ap[2]);
    printf("%d\n", ap[3]);
    printf("%d\n", ap[4]);

    free(ap);
    return 0;
}
