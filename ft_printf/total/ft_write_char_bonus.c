/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:09 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 21:31:54 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static char	*ft_apply_width_char(char c, int flag, int width)
{
	 int	i;
	char	*ret;

	ret = ft_calloc(width + 1, sizeof(char));
	if (ret)
	{
		ret[width] = '\0';
		i = 0;
		if (flag & LEFT)
			ret[i++] = c;
		else
			ret[--width] = c;
		while (i < width)
			ret[i++] = ' ';
	}
	return (ret);
}

int	ft_write_char(va_list list, int flag, int width, int precision)
{
	char	arg_char;
	char	*ret_str;
	 int	ret;

	precision = 0;
	ret = -1;
	arg_char = va_arg(list, int);
	ret_str = NULL;
	if (width > 1)
	{
		ret_str = ft_apply_width_char(arg_char, flag, width);
		if (ret_str)
		{
			ret = write(1, ret_str, width);
			if (ret < width)
				ret = -1;
			ft_free_str(&ret_str);
		}
	}
	else if (width <= 1)
		ret = ft_write_other(&arg_char);
	return (ret);
}
