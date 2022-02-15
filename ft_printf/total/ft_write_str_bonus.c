/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:33:48 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static char	*ft_apply_precision_str(char **arr, int precision)
{
	char	*ret;

	ret = ft_calloc(precision + 1, sizeof(char));
	if (ret && precision >= 0)
		ft_strlcpy(ret, *arr, precision + 1);
	ft_free_str(arr);
	return (ret);
}

int	ft_write_str(va_list list, int flag, int width, int precision)
{
	char	*arg_str;
	char	*ret_str;
	 int	ret;

	arg_str = va_arg(list, char *);
	if (!arg_str)
		ret_str = ft_strdup("(null)");
	else
		ret_str = ft_strdup(arg_str);
	if (precision > -1)
		ret_str = ft_apply_precision_str(&ret_str, precision);
	if ((int)ft_strlen(ret_str) < width)
		ret_str = ft_apply_width(&ret_str, flag, width);
	ret = ft_write_n_free(&ret_str);
	return (ret);
}
