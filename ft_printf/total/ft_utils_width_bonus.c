/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_width_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:32:54 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 20:05:02 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_apply_width(char **arr, int flag, int width)
{
	char	*add;
	char	*ret;

	ret = NULL;
	if (!(*arr))
		return (NULL);
	width -= ft_strlen(*arr);
	if ((flag & ZEROPAD) && (flag & NEGATIVE || flag & PLUS || flag & SPACE))
		width--;
	add = ft_calloc(width + 1, sizeof(char));
	if (add)
	{
		if (flag & ZEROPAD)
			add = ft_strnfill(add, '0', width);
		else
			add = ft_strnfill(add, ' ', width);
		if (flag & LEFT)
			ret = ft_strjoin(*arr, add);
		else
			ret = ft_strjoin(add, *arr);
		ft_free_str(&add);
	}
	ft_free_str(arr);
	return (ret);
}
