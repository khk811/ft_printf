/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_percent_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:33:26 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 15:17:57 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_write_percent(va_list list, int flag, int width, int precision)
{
	int	ret;

	flag = 0;
	precision = 0;
	width = 0;
	list = 0;
	ret = write(1, "%", 1);
	if (ret < 1)
		ret = -1;
	return (ret);
}
