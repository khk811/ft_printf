/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex_lo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:10:31 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 17:11:09 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex_lo(va_list list)
{
	 int	arg_num;
	char	*ret_str;
	 int	ret;

	arg_num = va_arg(list, int);
	ret_str = ft_uns_itoa(arg_num, 1);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}