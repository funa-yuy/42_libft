/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:00:45 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 03:13:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	a = 'c';
	int	b = 'A';
	int	c = 'X';
	int	d = 'z';
	int	e = 65;
	int	f = 122;
	int	g = 97;

	int	h = '0';
	int	i = 48;
	int	j = 49;
	int	k = '3';
	int	l = '9';
	int	m = 57;

	int	n = '@';
	int	o = '%';
	int	p = ',';
	int	q = ' ';

	int	r = '\n';
	int	s = '\t';
	int	t = 10;
	int	u = 0;
	int	v = 127;

	int	w = 128;
	int	x = 200;
	int	y = 3000;
	int	z[4] = {'c', '0', '@', '\n'};

	printf("英字\n");
	printf("isascii(%d) = %d\n", a, isascii(a));
	printf("ft_isascii(%d) = %d\n", a, ft_isascii(a));
	printf("isascii(%d) = %d\n", b, isascii(b));
	printf("ft_isascii(%d) = %d\n", b, ft_isascii(b));
	printf("isascii(%d) = %d\n", c, isascii(c));
	printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
	printf("isascii(%d) = %d\n", d, isascii(d));
	printf("ft_isascii(%d) = %d\n", d, ft_isascii(d));
	printf("isascii(%d) = %d\n", e, isascii(e));
	printf("ft_isascii(%d) = %d\n", e, ft_isascii(e));
	printf("isascii(%d) = %d\n", f, isascii(f));
	printf("ft_isascii(%d) = %d\n", f, ft_isascii(f));
	printf("isascii(%d) = %d\n", g, isascii(g));
	printf("ft_isascii(%d) = %d\n", g, ft_isascii(g));
printf("\n数字\n");
	printf("isascii(%d) = %d\n", h, isascii(h));
	printf("ft_isascii(%d) = %d\n", h, ft_isascii(h));
	printf("isascii(%d) = %d\n", i, isascii(i));
	printf("ft_isascii(%d) = %d\n", i, ft_isascii(i));
	printf("isascii(%d) = %d\n", j, isascii(j));
	printf("ft_isascii(%d) = %d\n", j, ft_isascii(j));
	printf("isascii(%d) = %d\n", k, isascii(k));
	printf("ft_isascii(%d) = %d\n", k, ft_isascii(k));
	printf("isascii(%d) = %d\n", l, isascii(l));
	printf("ft_isascii(%d) = %d\n", l, ft_isascii(l));
	printf("isascii(%d) = %d\n", m, isascii(m));
	printf("ft_isascii(%d) = %d\n", m, ft_isascii(m));
printf("\n記号\n");
	printf("isascii(%d) = %d\n", n, isascii(n));
	printf("ft_isascii(%d) = %d\n", n, ft_isascii(n));
	printf("isascii(%d) = %d\n", o, isascii(o));
	printf("ft_isascii(%d) = %d\n", o, ft_isascii(o));
	printf("isascii(%d) = %d\n", p, isascii(p));
	printf("ft_isascii(%d) = %d\n", p, ft_isascii(p));
	printf("isascii(%d) = %d\n", q, isascii(q));
	printf("ft_isascii(%d) = %d\n", q, ft_isascii(q));
printf("\n特殊文字\n");
	printf("isascii(%d) = %d\n", r, isascii(r));
	printf("ft_isascii(%d) = %d\n", r, ft_isascii(r));
	printf("isascii(%d) = %d\n", s, isascii(s));
	printf("ft_isascii(%d) = %d\n", s, ft_isascii(s));
	printf("isascii(%d) = %d\n", t, isascii(t));
	printf("ft_isascii(%d) = %d\n", t, ft_isascii(t));
	printf("isascii(%d) = %d\n", u, isascii(u));
	printf("ft_isascii(%d) = %d\n", u, ft_isascii(u));
	printf("isascii(%d) = %d\n", v, isascii(v));
	printf("ft_isascii(%d) = %d\n", v, ft_isascii(v));

printf("\nアスキーコード外\n");
	printf("isascii(%d) = %d\n", w, isascii(w));
	printf("ft_isascii(%d) = %d\n", w, ft_isascii(w));
	printf("isascii(%d) = %d\n", x, isascii(x));
	printf("ft_isascii(%d) = %d\n", x, ft_isascii(x));
	printf("isascii(%d) = %d\n", y, isascii(y));
	printf("ft_isascii(%d) = %d\n\n", y, ft_isascii(y));

printf("\n英字・数字・記号・特殊文字\n");
	for(int i = 0; i < 4; i++)
	printf("isascii(%d) = %d\n", z[i], isascii(z[i]));
	for(int i = 0; i < 4; i++)
	printf("ft_isascii(%d) = %d\n", z[i], ft_isascii(z[i]));

	return	(0);
}
