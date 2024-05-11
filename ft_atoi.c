/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:04:52 by mfunakos          #+#    #+#             */
/*   Updated: 2024/05/11 21:14:16 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *str)
{
	unsigned long	result;
	// unsigned long	long_max;
	int	sign;
	int i;
	int	digit;

	sign = 1;
	result = 0;
	i = 0;
	// long_max = LONG_MAX;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		digit = str[i] - '0';
		if (sign == 1 && result > (((unsigned long)LONG_MAX - digit) / 10))
			return ((int)LONG_MAX);
		if (sign == -1 && result > (((unsigned long)LONG_MAX + 1 - digit) / 10))
			return ((int)LONG_MIN);
		result = result * 10 + digit;
		i++;
	}

	return (result);
}


#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char a[8] = "12345";
	printf("atoi %s = %d\n", a, atoi(a));
	printf("ft_atoi %s = %d\n", a, ft_atoi(a));
	char b[8] = "-123456";
	printf("atoi %s = %d\n", b, atoi(b));
	printf("ft_atoi %s = %d\n", b, ft_atoi(b));

	char c[8] = "123ABC";
	printf("atoi %s = %d\n", c, atoi(c));
	printf("ft_atoi %s = %d\n", c, ft_atoi(c));

	char d[8] = "ABC";
	printf("atoi %s = %d\n", d, atoi(d));
	printf("ft_atoi %s = %d\n", d, ft_atoi(d));

	char e[8] = "";
	printf("atoi %s = %d\n", e, atoi(e));
	printf("ft_atoi %s = %d\n", e, ft_atoi(e));

	char f[8] = "NULL";
	printf("atoi %s = %d\n", f, atoi(f));
	printf("ft_atoi %s = %d\n", f, ft_atoi(f));

	char g[8] = "12\n34";
	printf("atoi %s = %d\n", g, atoi(g));
	printf("ft_atoi %s = %d\n", g, ft_atoi(g));

	char h[8] = "12\034";
	printf("atoi %s = %d\n", h, atoi(h));
	printf("ft_atoi %s = %d\n", h, ft_atoi(h));

	char i[10] = "123ABC456";
	printf("atoi %s = %d\n", i, atoi(i));
	printf("ft_atoi %s = %d\n", i, ft_atoi(i));

	char j[10] = "123 456";
	printf("atoi %s = %d\n", j, atoi(j));
	printf("ft_atoi %s = %d\n", j, ft_atoi(j));

	char k[10] = "a123456";
	printf("atoi %s = %d\n", k, atoi(k));
	printf("ft_atoi %s = %d\n", k, ft_atoi(k));

	char l[10] = "123+456";
	printf("atoi %s = %d\n", l, atoi(l));
	printf("ft_atoi %s = %d\n", l, ft_atoi(l));

	char m[10] = "-123+456";
	printf("atoi %s = %d\n", m, atoi(m));
	printf("ft_atoi %s = %d\n", m, ft_atoi(m));

	char n[10] = "--123456";
	printf("atoi %s = %d\n", n, atoi(n));
	printf("ft_atoi %s = %d\n", n, ft_atoi(n));

	char o[10] = "+0123456";
	printf("atoi %s = %d\n", o, atoi(o));
	printf("ft_atoi %s = %d\n", o, ft_atoi(o));

	char p[10] = "+-0123456";
	printf("atoi %s = %d\n", p, atoi(p));
	printf("ft_atoi %s = %d\n", p, ft_atoi(p));

	char q[20] = "+++0123456";
	printf("atoi %s = %d\n", q, atoi(q));
	printf("ft_atoi %s = %d\n", q, ft_atoi(q));

	char r[20] = "++-0123456";
	printf("atoi %s = %d\n", r, atoi(r));
	printf("ft_atoi %s = %d\n", r, ft_atoi(r));

	char s[20] = "00123456";
	printf("atoi %s = %d\n", s, atoi(s));
	printf("ft_atoi %s = %d\n", s, ft_atoi(s));

	char t[10] = "-00";
	printf("atoi %s = %d\n", t, atoi(t));
	printf("ft_atoi %s = %d\n", t, ft_atoi(t));

	char u[20] = "\t\n\v\f\r   12345";
	printf("atoi %s = %d\n", u, atoi(u));
	printf("ft_atoi %s = %d\n", u, ft_atoi(u));

	char v[20] = "-2147483648";
	printf("atoi %s = %d\n", v, atoi(v));
	printf("ft_atoi %s = %d\n", v, ft_atoi(v));

	char w[20] = "2147483648";
	printf("atoi %s = %d\n", w, atoi(w));
	printf("ft_atoi %s = %d\n", w, ft_atoi(w));

	char v1[20] = "-2147483648111";
	printf("atoi %s = %d\n", v1, atoi(v1));
	printf("ft_atoi %s = %d\n", v1, ft_atoi(v1));

	char w2[20] = "2147483648111";
	printf("atoi %s = %d\n", w2, atoi(w2));
	printf("ft_atoi %s = %d\n", w2, ft_atoi(w2));

	char x[20] = "-9223372036854775808";
	printf("atoi %s = %d\n", x, atoi(x));
	printf("ft_atoi %s = %d\n", x, ft_atoi(x));

	char y[20] = "9223372036854775807";
	printf("atoi %s = %d\n", y, atoi(y));
	printf("ft_atoi %s = %d\n", y, ft_atoi(y));

	char z[30] = "-922337203685477580800";
	printf("atoi %s = %d\n", z, atoi(z));
	printf("ft_atoi %s = %d\n", z, ft_atoi(z));

	char z1[30] = "922337203685477580700";
	printf("atoi %s = %d\n", z1, atoi(z1));
	printf("ft_atoi %s = %d\n", z1, ft_atoi(z1));

	return (0);
}
