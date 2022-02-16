/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_str_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:32:46 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 19:45:27 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_free_str(char **str)
{
	if (!(*str))
		return ;
	free(*str);
	*str = NULL;
}

char	*ft_strnfill(char *s, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
		s[i++] = c;
	s[i] = '\0';
	return (s);
}

int	ft_write_n_free(char **str)
{
	int	ret;
	int	expected;

	if (!(*str))
		ret = -1;
	else
	{
		expected = (int)ft_strlen(*str);
		ret = write(1, *str, expected);
		if (ret != expected)
			ret = -1;
		ft_free_str(str);
	}
	return (ret);
}

int	ft_write_other(const char *s)
{
	int	ret;

	ret = write(1, s, 1);
	if (ret < 1)
		ret = -1;
	return (ret);
}
