/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_itoa_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:31:34 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:34:03 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_count_digits(long n)
{
	int	ret;

	ret = 0;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		ret++;
	}
	ret++;
	return (ret);
}

static long	ft_make_divisor(long n)
{
	 int	i;
	long	ret;

	ret = 1;
	i = ft_count_digits(n);
	while (--i > 0)
		ret *= 10;
	return (ret);
}

char	*ft_abs_itoa(int n)
{
	char	*ret;
	 int	i;
	long	divisor;
	long	long_n;

	i = 0;
	long_n = (long)n;
	divisor = ft_make_divisor(long_n);
	ret = (char *)malloc(sizeof(char) * (ft_count_digits(long_n) + 1));
	if (!ret)
		return (NULL);
	if (long_n < 0)
		long_n *= -1;
	while (divisor > 0)
	{
		ret[i++] = (long_n / divisor) + '0';
		long_n %= divisor;
		divisor /= 10;
	}
	ret[i] = '\0';
	return (ret);
}
