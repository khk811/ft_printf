/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:14 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:33:52 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_write_digit(va_list list, int flag, int width, int precision)
{
	 int	arg_num;
	char	*ret_str;
	 int	ret;

	arg_num = va_arg(list, int);
	if (arg_num < 0)
		flag |= NEGATIVE;
	ret_str = ft_abs_itoa(arg_num);
	if (precision > -1)
		ret_str = ft_apply_precision(&ret_str, &flag, precision);
	if (!(flag & ZEROPAD))
		ret_str = ft_apply_sign_flag(&ret_str, flag);
	if (precision < width && (int)ft_strlen(ret_str) < width)
		ret_str = ft_apply_width(&ret_str, flag, width);
	if (flag & ZEROPAD)
		ret_str = ft_apply_sign_flag(&ret_str, flag);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}
