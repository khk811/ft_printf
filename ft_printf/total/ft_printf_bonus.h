/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:26:29 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/02/15 20:29:14 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "libft.h"
# include <stdarg.h>

# define LEFT	    1
# define PLUS	    2
# define SPACE	    4
# define ALTER	    8
# define ZEROPAD	16
# define NEGATIVE	32
# define HEX        64
# define UPCASE	    128

typedef int	(*t_func)(va_list list, int flag, int width, int precision);
int		ft_printf(const char *format, ...);
int		ft_parce_tree(const char **s, va_list list);
int		ft_get_flag(const char **s);
int		ft_get_width(const char **s);
int		ft_get_precision(const char **s);
t_func	ft_get_func(char c);
int		ft_write_char(va_list list, int flag, int width, int precision);
int		ft_write_str(va_list list, int flag, int width, int precision);
int		ft_write_addr(va_list list, int flag, int width, int precision);
int		ft_write_digit(va_list list, int flag, int width, int precision);
int		ft_write_uns_int(va_list list, int flag, int width, int precision);
int		ft_write_hex_lo(va_list list, int flag, int width, int precision);
int		ft_write_hex_up(va_list list, int flag, int width, int precision);
int		ft_write_percent(va_list list, int flag, int width, int precision);
int		ft_isflag(char c);
int		ft_isspecifier(char c);
char	*ft_abs_itoa(int n);
char	*ft_uns_itoa(unsigned int n, int flag);
char	*ft_addrtoa(unsigned long long n);
void	ft_free_str(char **str);
char	*ft_strnfill(char *s, char c, int len);
int		ft_write_n_free(char **str);
int		ft_write_other(const char *s);
char	*ft_apply_alter_flag(char **arr, int flag);
char	*ft_apply_sign_flag(char **arr, int flag);
char	*ft_apply_width(char **arr, int flag, int width);
char	*ft_apply_precision(char **arr, int *flag, int precision);

#endif
