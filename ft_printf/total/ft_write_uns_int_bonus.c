/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_uns_int_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:34 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:33:46 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_write_uns_int(va_list list, int flag, int width, int precision)
{
	unsigned int	arg_num;
	        char	*ret_str;
	         int	ret;

	arg_num = va_arg(list, unsigned int);
	ret_str = ft_uns_itoa(arg_num, flag);
	if (precision > -1)
		ret_str = ft_apply_precision(&ret_str, &flag, precision);
	if (precision < width && (int)ft_strlen(ret_str) < width)
		ret_str = ft_apply_width(&ret_str, flag, width);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}
