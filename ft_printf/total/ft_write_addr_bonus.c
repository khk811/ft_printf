/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_addr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:02 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:33:54 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_write_addr(va_list list, int flag, int width, int precision)
{
	unsigned long long	addr;
	            char	*ret_str;
	             int	ret;

	precision = 0;
	flag |= HEX;
	addr = (unsigned long long)(va_arg(list, void *));
	ret_str = ft_addrtoa(addr);
	ret_str = ft_apply_alter_flag(&ret_str, flag);
	if ((int)ft_strlen(ret_str) < width)
		ret_str = ft_apply_width(&ret_str, flag, width);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}
