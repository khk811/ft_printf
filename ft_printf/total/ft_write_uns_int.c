/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_uns_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:10:42 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:33:40 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_uns_int(va_list list)
{
	 int	arg_num;
	char	*ret_str;
	 int	ret;

	arg_num = va_arg(list, int);
	ret_str = ft_uns_itoa(arg_num, 0);
	ret = write(1, ret_str, ft_strlen(ret_str));
	ft_free_str(&ret_str);
	return (ret);
}
