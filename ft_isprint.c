/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:10:15 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 03:13:20 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	printf("isprint(%d) = %d\n", a, isprint(a));
	printf("ft_isprint(%d) = %d\n", a, ft_isprint(a));
	printf("isprint(%d) = %d\n", b, isprint(b));
	printf("ft_isprint(%d) = %d\n", b, ft_isprint(b));
	printf("isprint(%d) = %d\n", c, isprint(c));
	printf("ft_isprint(%d) = %d\n", c, ft_isprint(c));
	printf("isprint(%d) = %d\n", d, isprint(d));
	printf("ft_isprint(%d) = %d\n", d, ft_isprint(d));
	printf("isprint(%d) = %d\n", e, isprint(e));
	printf("ft_isprint(%d) = %d\n", e, ft_isprint(e));
	printf("isprint(%d) = %d\n", f, isprint(f));
	printf("ft_isprint(%d) = %d\n", f, ft_isprint(f));
	printf("isprint(%d) = %d\n", g, isprint(g));
	printf("ft_isprint(%d) = %d\n", g, ft_isprint(g));
printf("\n数字\n");
	printf("isprint(%d) = %d\n", h, isprint(h));
	printf("ft_isprint(%d) = %d\n", h, ft_isprint(h));
	printf("isprint(%d) = %d\n", i, isprint(i));
	printf("ft_isprint(%d) = %d\n", i, ft_isprint(i));
	printf("isprint(%d) = %d\n", j, isprint(j));
	printf("ft_isprint(%d) = %d\n", j, ft_isprint(j));
	printf("isprint(%d) = %d\n", k, isprint(k));
	printf("ft_isprint(%d) = %d\n", k, ft_isprint(k));
	printf("isprint(%d) = %d\n", l, isprint(l));
	printf("ft_isprint(%d) = %d\n", l, ft_isprint(l));
	printf("isprint(%d) = %d\n", m, isprint(m));
	printf("ft_isprint(%d) = %d\n", m, ft_isprint(m));
printf("\n記号\n");
	printf("isprint(%d) = %d\n", n, isprint(n));
	printf("ft_isprint(%d) = %d\n", n, ft_isprint(n));
	printf("isprint(%d) = %d\n", o, isprint(o));
	printf("ft_isprint(%d) = %d\n", o, ft_isprint(o));
	printf("isprint(%d) = %d\n", p, isprint(p));
	printf("ft_isprint(%d) = %d\n", p, ft_isprint(p));
	printf("isprint(%d) = %d\n", q, isprint(q));
	printf("ft_isprint(%d) = %d\n", q, ft_isprint(q));
printf("\n特殊文字\n");
	printf("isprint(%d) = %d\n", r, isprint(r));
	printf("ft_isprint(%d) = %d\n", r, ft_isprint(r));
	printf("isprint(%d) = %d\n", s, isprint(s));
	printf("ft_isprint(%d) = %d\n", s, ft_isprint(s));
	printf("isprint(%d) = %d\n", t, isprint(t));
	printf("ft_isprint(%d) = %d\n", t, ft_isprint(t));
	printf("isprint(%d) = %d\n", u, isprint(u));
	printf("ft_isprint(%d) = %d\n", u, ft_isprint(u));
	printf("isprint(%d) = %d\n", v, isprint(v));
	printf("ft_isprint(%d) = %d\n", v, ft_isprint(v));

printf("\nアスキーコード外\n");
	printf("isprint(%d) = %d\n", w, isprint(w));
	printf("ft_isprint(%d) = %d\n", w, ft_isprint(w));
	printf("isprint(%d) = %d\n", x, isprint(x));
	printf("ft_isprint(%d) = %d\n", x, ft_isprint(x));
	printf("isprint(%d) = %d\n", y, isprint(y));
	printf("ft_isprint(%d) = %d\n\n", y, ft_isprint(y));

printf("\n英字・数字・記号・特殊文字\n");
	for(int i = 0; i < 4; i++)
	printf("isprint(%d) = %d\n", z[i], isprint(z[i]));
	for(int i = 0; i < 4; i++)
	printf("ft_isprint(%d) = %d\n", z[i], ft_isprint(z[i]));

	return	(0);
}
