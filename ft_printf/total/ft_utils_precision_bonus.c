/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_precision_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:32:43 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 19:52:55 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_apply_precision(char **arr, int *flag, int precision)
{
	char	*add;
	char	*ret;

	ret = NULL;
	if (!(*arr))
		return (NULL);
	*flag &= ~ZEROPAD;
	if (precision == 0 && !(ft_strncmp(*arr, "0", 1)))
	{
		ft_free_str(arr);
		return (ft_strdup(""));
	}
	else if (precision <= (int)ft_strlen(*arr))
		return (*arr);
	precision -= ft_strlen(*arr);
	add = ft_calloc(precision + 1, sizeof(char));
	if (add)
	{
		add = ft_strnfill(add, '0', precision);
		ret = ft_strjoin(add, *arr);
		ft_free_str(&add);
	}
	ft_free_str(arr);
	return (ret);
}
