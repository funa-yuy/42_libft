/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 02:54:32 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 03:13:18 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) \
	|| (c >= '0' && c <= '9'))
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
	printf("isalnum(%d) = %d\n", a, isalnum(a));
	printf("ft_isalnum(%d) = %d\n", a, ft_isalnum(a));
	printf("isalnum(%d) = %d\n", b, isalnum(b));
	printf("ft_isalnum(%d) = %d\n", b, ft_isalnum(b));
	printf("isalnum(%d) = %d\n", c, isalnum(c));
	printf("ft_isalnum(%d) = %d\n", c, ft_isalnum(c));
	printf("isalnum(%d) = %d\n", d, isalnum(d));
	printf("ft_isalnum(%d) = %d\n", d, ft_isalnum(d));
	printf("isalnum(%d) = %d\n", e, isalnum(e));
	printf("ft_isalnum(%d) = %d\n", e, ft_isalnum(e));
	printf("isalnum(%d) = %d\n", f, isalnum(f));
	printf("ft_isalnum(%d) = %d\n", f, ft_isalnum(f));
	printf("isalnum(%d) = %d\n", g, isalnum(g));
	printf("ft_isalnum(%d) = %d\n", g, ft_isalnum(g));
printf("\n数字\n");
	printf("isalnum(%d) = %d\n", h, isalnum(h));
	printf("ft_isalnum(%d) = %d\n", h, ft_isalnum(h));
	printf("isalnum(%d) = %d\n", i, isalnum(i));
	printf("ft_isalnum(%d) = %d\n", i, ft_isalnum(i));
	printf("isalnum(%d) = %d\n", j, isalnum(j));
	printf("ft_isalnum(%d) = %d\n", j, ft_isalnum(j));
	printf("isalnum(%d) = %d\n", k, isalnum(k));
	printf("ft_isalnum(%d) = %d\n", k, ft_isalnum(k));
	printf("isalnum(%d) = %d\n", l, isalnum(l));
	printf("ft_isalnum(%d) = %d\n", l, ft_isalnum(l));
	printf("isalnum(%d) = %d\n", m, isalnum(m));
	printf("ft_isalnum(%d) = %d\n", m, ft_isalnum(m));
printf("\n記号\n");
	printf("isalnum(%d) = %d\n", n, isalnum(n));
	printf("ft_isalnum(%d) = %d\n", n, ft_isalnum(n));
	printf("isalnum(%d) = %d\n", o, isalnum(o));
	printf("ft_isalnum(%d) = %d\n", o, ft_isalnum(o));
	printf("isalnum(%d) = %d\n", p, isalnum(p));
	printf("ft_isalnum(%d) = %d\n", p, ft_isalnum(p));
	printf("isalnum(%d) = %d\n", q, isalnum(q));
	printf("ft_isalnum(%d) = %d\n", q, ft_isalnum(q));
printf("\n特殊文字\n");
	printf("isalnum(%d) = %d\n", r, isalnum(r));
	printf("ft_isalnum(%d) = %d\n", r, ft_isalnum(r));
	printf("isalnum(%d) = %d\n", s, isalnum(s));
	printf("ft_isalnum(%d) = %d\n", s, ft_isalnum(s));
	printf("isalnum(%d) = %d\n", t, isalnum(t));
	printf("ft_isalnum(%d) = %d\n", t, ft_isalnum(t));
	printf("isalnum(%d) = %d\n", u, isalnum(u));
	printf("ft_isalnum(%d) = %d\n", u, ft_isalnum(u));
	printf("isalnum(%d) = %d\n", v, isalnum(v));
	printf("ft_isalnum(%d) = %d\n", v, ft_isalnum(v));

printf("\nアスキーコード外\n");
	printf("isalnum(%d) = %d\n", w, isalnum(w));
	printf("ft_isalnum(%d) = %d\n", w, ft_isalnum(w));
	printf("isalnum(%d) = %d\n", x, isalnum(x));
	printf("ft_isalnum(%d) = %d\n", x, ft_isalnum(x));
	printf("isalnum(%d) = %d\n", y, isalnum(y));
	printf("ft_isalnum(%d) = %d\n\n", y, ft_isalnum(y));

printf("\n英字・数字・記号・特殊文字\n");
	for(int i = 0; i < 4; i++)
	printf("isalnum(%d) = %d\n", z[i], isalnum(z[i]));
	for(int i = 0; i < 4; i++)
	printf("ft_isalnum(%d) = %d\n", z[i], ft_isalnum(z[i]));

	return	(0);
}
