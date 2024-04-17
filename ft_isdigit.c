/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 02:30:42 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 03:13:19 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	printf("isdigit(%d) = %d\n", a, isdigit(a));
	printf("ft_isdigit(%d) = %d\n", a, ft_isdigit(a));
	printf("isdigit(%d) = %d\n", b, isdigit(b));
	printf("ft_isdigit(%d) = %d\n", b, ft_isdigit(b));
	printf("isdigit(%d) = %d\n", c, isdigit(c));
	printf("ft_isdigit(%d) = %d\n", c, ft_isdigit(c));
	printf("isdigit(%d) = %d\n", d, isdigit(d));
	printf("ft_isdigit(%d) = %d\n", d, ft_isdigit(d));
	printf("isdigit(%d) = %d\n", e, isdigit(e));
	printf("ft_isdigit(%d) = %d\n", e, ft_isdigit(e));
	printf("isdigit(%d) = %d\n", f, isdigit(f));
	printf("ft_isdigit(%d) = %d\n", f, ft_isdigit(f));
	printf("isdigit(%d) = %d\n", g, isdigit(g));
	printf("ft_isdigit(%d) = %d\n", g, ft_isdigit(g));
printf("\n数字\n");
	printf("isdigit(%d) = %d\n", h, isdigit(h));
	printf("ft_isdigit(%d) = %d\n", h, ft_isdigit(h));
	printf("isdigit(%d) = %d\n", i, isdigit(i));
	printf("ft_isdigit(%d) = %d\n", i, ft_isdigit(i));
	printf("isdigit(%d) = %d\n", j, isdigit(j));
	printf("ft_isdigit(%d) = %d\n", j, ft_isdigit(j));
	printf("isdigit(%d) = %d\n", k, isdigit(k));
	printf("ft_isdigit(%d) = %d\n", k, ft_isdigit(k));
	printf("isdigit(%d) = %d\n", l, isdigit(l));
	printf("ft_isdigit(%d) = %d\n", l, ft_isdigit(l));
	printf("isdigit(%d) = %d\n", m, isdigit(m));
	printf("ft_isdigit(%d) = %d\n", m, ft_isdigit(m));
printf("\n記号\n");
	printf("isdigit(%d) = %d\n", n, isdigit(n));
	printf("ft_isdigit(%d) = %d\n", n, ft_isdigit(n));
	printf("isdigit(%d) = %d\n", o, isdigit(o));
	printf("ft_isdigit(%d) = %d\n", o, ft_isdigit(o));
	printf("isdigit(%d) = %d\n", p, isdigit(p));
	printf("ft_isdigit(%d) = %d\n", p, ft_isdigit(p));
	printf("isdigit(%d) = %d\n", q, isdigit(q));
	printf("ft_isdigit(%d) = %d\n", q, ft_isdigit(q));
printf("\n特殊文字\n");
	printf("isdigit(%d) = %d\n", r, isdigit(r));
	printf("ft_isdigit(%d) = %d\n", r, ft_isdigit(r));
	printf("isdigit(%d) = %d\n", s, isdigit(s));
	printf("ft_isdigit(%d) = %d\n", s, ft_isdigit(s));
	printf("isdigit(%d) = %d\n", t, isdigit(t));
	printf("ft_isdigit(%d) = %d\n", t, ft_isdigit(t));
	printf("isdigit(%d) = %d\n", u, isdigit(u));
	printf("ft_isdigit(%d) = %d\n", u, ft_isdigit(u));
	printf("isdigit(%d) = %d\n", v, isdigit(v));
	printf("ft_isdigit(%d) = %d\n", v, ft_isdigit(v));

printf("\nアスキーコード外\n");
	printf("isdigit(%d) = %d\n", w, isdigit(w));
	printf("ft_isdigit(%d) = %d\n", w, ft_isdigit(w));
	printf("isdigit(%d) = %d\n", x, isdigit(x));
	printf("ft_isdigit(%d) = %d\n", x, ft_isdigit(x));
	printf("isdigit(%d) = %d\n", y, isdigit(y));
	printf("ft_isdigit(%d) = %d\n\n", y, ft_isdigit(y));

printf("\n英字・数字・記号・特殊文字\n");
	for(int i = 0; i < 4; i++)
	printf("isdigit(%d) = %d\n", z[i], isdigit(z[i]));
	for(int i = 0; i < 4; i++)
	printf("ft_isdigit(%d) = %d\n", z[i], ft_isdigit(z[i]));

	return	(0);
}
