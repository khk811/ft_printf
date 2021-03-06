/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:30:34 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/16 20:43:00 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_isflag(char c)
{
	char	*the_flags;

	the_flags = "-+ #0";
	while (*the_flags)
	{
		if (*the_flags == c)
			return (1);
		the_flags++;
	}
	return (0);
}

int	ft_isspecifier(char c)
{
	char	*the_specifier;

	the_specifier = "cspdiuxX%";
	while (*the_specifier)
	{
		if (*the_specifier == c)
			return (1);
		the_specifier++;
	}
	return (0);
}
