/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_flag_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:32:39 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 19:52:44 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*ft_apply_alter_flag(char **arr, int flag)
{
	char	*ret;

	if (!(*arr))
		return (NULL);
	if (flag & UPCASE)
		ret = "0X";
	else
		ret = "0x";
	ret = ft_strjoin(ret, *arr);
	ft_free_str(arr);
	return (ret);
}

char	*ft_apply_sign_flag(char **arr, int flag)
{
	char	*ret;

	ret = NULL;
	if (!(*arr))
		return (NULL);
	if (flag & NEGATIVE)
		ret = ft_strjoin("-", *arr);
	else if (flag & PLUS)
		ret = ft_strjoin("+", *arr);
	else if (!(flag & PLUS) && (flag & SPACE))
		ret = ft_strjoin(" ", *arr);
	else
		return (*arr);
	ft_free_str(arr);
	return (ret);
}
