/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_tree_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:32:13 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:34:00 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_get_flag(const char **s)
{
	int	ret;

	ret = 0;
	while (ft_isflag(**s))
	{
		if (**s == '-')
			ret |= LEFT;
		if (**s == '+')
			ret |= PLUS;
		if (**s == ' ')
			ret |= SPACE;
		if (**s == '#')
			ret |= ALTER;
		if (**s == '0')
			ret |= ZEROPAD;
		*s += 1;
	}
	return (ret);
}

int	ft_get_width(const char **s)
{
	int	ret;

	ret = 0;
	while (ft_isdigit(**s))
	{
		ret *= 10;
		ret += **s - '0';
		*s += 1;
	}
	return (ret);
}

int	ft_get_precision(const char **s)
{
	int	ret;

	ret = -1;
	if (**s == '.')
	{
		*s += 1;
		ret = 0;
	}
	while (ft_isdigit(**s))
	{
		ret *= 10;
		ret += **s - '0';
		*s += 1;
	}
	return (ret);
}

int	ft_parce_tree(const char **s, va_list list)
{
	int	flag;
	int	width;
	int	precision;
	int	ret;

	ret = 0;
	flag = ft_get_flag(s);
	width = ft_get_width(s);
	precision = ft_get_precision(s);
	if (ft_get_func(**s))
	{
		ret = ft_get_func(**s)(list, flag, width, precision);
		*s += 1;
	}
	return (ret);
}
