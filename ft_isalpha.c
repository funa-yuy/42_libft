/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 01:16:12 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/16 03:13:13 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	printf("isalpha(%d) = %d\n", a, isalpha(a));
	printf("ft_isalpha(%d) = %d\n", a, ft_isalpha(a));
	printf("isalpha(%d) = %d\n", b, isalpha(b));
	printf("ft_isalpha(%d) = %d\n", b, ft_isalpha(b));
	printf("isalpha(%d) = %d\n", c, isalpha(c));
	printf("ft_isalpha(%d) = %d\n", c, ft_isalpha(c));
	printf("isalpha(%d) = %d\n", d, isalpha(d));
	printf("ft_isalpha(%d) = %d\n", d, ft_isalpha(d));
	printf("isalpha(%d) = %d\n", e, isalpha(e));
	printf("ft_isalpha(%d) = %d\n", e, ft_isalpha(e));
	printf("isalpha(%d) = %d\n", f, isalpha(f));
	printf("ft_isalpha(%d) = %d\n", f, ft_isalpha(f));
	printf("isalpha(%d) = %d\n", g, isalpha(g));
	printf("ft_isalpha(%d) = %d\n", g, ft_isalpha(g));
printf("\n数字\n");
	printf("isalpha(%d) = %d\n", h, isalpha(h));
	printf("ft_isalpha(%d) = %d\n", h, ft_isalpha(h));
	printf("isalpha(%d) = %d\n", i, isalpha(i));
	printf("ft_isalpha(%d) = %d\n", i, ft_isalpha(i));
	printf("isalpha(%d) = %d\n", j, isalpha(j));
	printf("ft_isalpha(%d) = %d\n", j, ft_isalpha(j));
	printf("isalpha(%d) = %d\n", k, isalpha(k));
	printf("ft_isalpha(%d) = %d\n", k, ft_isalpha(k));
	printf("isalpha(%d) = %d\n", l, isalpha(l));
	printf("ft_isalpha(%d) = %d\n", l, ft_isalpha(l));
	printf("isalpha(%d) = %d\n", m, isalpha(m));
	printf("ft_isalpha(%d) = %d\n", m, ft_isalpha(m));
printf("\n記号\n");
	printf("isalpha(%d) = %d\n", n, isalpha(n));
	printf("ft_isalpha(%d) = %d\n", n, ft_isalpha(n));
	printf("isalpha(%d) = %d\n", o, isalpha(o));
	printf("ft_isalpha(%d) = %d\n", o, ft_isalpha(o));
	printf("isalpha(%d) = %d\n", p, isalpha(p));
	printf("ft_isalpha(%d) = %d\n", p, ft_isalpha(p));
	printf("isalpha(%d) = %d\n", q, isalpha(q));
	printf("ft_isalpha(%d) = %d\n", q, ft_isalpha(q));
printf("\n特殊文字\n");
	printf("isalpha(%d) = %d\n", r, isalpha(r));
	printf("ft_isalpha(%d) = %d\n", r, ft_isalpha(r));
	printf("isalpha(%d) = %d\n", s, isalpha(s));
	printf("ft_isalpha(%d) = %d\n", s, ft_isalpha(s));
	printf("isalpha(%d) = %d\n", t, isalpha(t));
	printf("ft_isalpha(%d) = %d\n", t, ft_isalpha(t));
	printf("isalpha(%d) = %d\n", u, isalpha(u));
	printf("ft_isalpha(%d) = %d\n", u, ft_isalpha(u));
	printf("isalpha(%d) = %d\n", v, isalpha(v));
	printf("ft_isalpha(%d) = %d\n", v, ft_isalpha(v));

printf("\nアスキーコード外\n");
	printf("isalpha(%d) = %d\n", w, isalpha(w));
	printf("ft_isalpha(%d) = %d\n", w, ft_isalpha(w));
	printf("isalpha(%d) = %d\n", x, isalpha(x));
	printf("ft_isalpha(%d) = %d\n", x, ft_isalpha(x));
	printf("isalpha(%d) = %d\n", y, isalpha(y));
	printf("ft_isalpha(%d) = %d\n\n", y, ft_isalpha(y));

printf("\n英字・数字・記号・特殊文字\n");
	for(int i = 0; i < 4; i++)
	printf("isalpha(%d) = %d\n", z[i], isalpha(z[i]));
	for(int i = 0; i < 4; i++)
	printf("ft_isalpha(%d) = %d\n", z[i], ft_isalpha(z[i]));

	return	(0);
}
