/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex_lo_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:18 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 20:58:06 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_write_hex_lo(va_list list, int flag, int width, int precision)
{
	unsigned int	arg_num;
	        char	*ret_str;
	         int	ret;

	flag |= HEX;
	arg_num = va_arg(list, unsigned int);
	ret_str = ft_uns_itoa(arg_num, flag);
	if (precision > -1)
		ret_str = ft_apply_precision(&ret_str, &flag, precision);
	if (arg_num != 0 && flag & ALTER)
		ret_str = ft_apply_alter_flag(&ret_str, flag);
	if (precision < width && (int)ft_strlen(ret_str) < width)
		ret_str = ft_apply_width(&ret_str, flag, width);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}
