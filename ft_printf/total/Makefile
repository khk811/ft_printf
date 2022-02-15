# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 17:13:44 by hyunkkim          #+#    #+#              #
#    Updated: 2022/02/15 21:16:57 by hyunkkim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIB_DIR=./Libft/
LIB_NAME=ft
LIB=$(LIB_DIR)lib$(LIB_NAME).a
INCLUDE=-I ./Libft
AR=ar
ARFLAGS=rcs
RM=rm -f
SRCS= ft_printf.c \
		ft_is.c \
		ft_addrtoa.c \
		ft_uns_itoa.c \
		ft_utils_str.c \
		ft_parce_tree.c \
		ft_get_func.c \
		ft_write_addr.c \
		ft_write_char.c \
		ft_write_digit.c \
		ft_write_hex_lo.c \
		ft_write_hex_up.c \
		ft_write_percent.c \
		ft_write_str.c \
		ft_write_uns_int.c

SRCS_BONUS= ft_printf_bonus.c \
			ft_is_bonus.c \
			ft_addrtoa_bonus.c \
			ft_abs_itoa_bonus.c \
			ft_uns_itoa_bonus.c \
			ft_utils_str_bonus.c \
			ft_utils_flag_bonus.c \
			ft_utils_width_bonus.c \
			ft_utils_precision_bonus.c \
			ft_parce_tree_bonus.c \
			ft_get_func_bonus.c \
			ft_write_addr_bonus.c \
			ft_write_char_bonus.c \
			ft_write_digit_bonus.c \
			ft_write_hex_lo_bonus.c \
			ft_write_hex_up_bonus.c \
			ft_write_percent_bonus.c \
			ft_write_str_bonus.c \
			ft_write_uns_int_bonus.c

OBJS=$(SRCS:.c=.o)
OBJS_BONUS=$(SRCS_BONUS:.c=.o)

$(NAME) : $(LIB) $(OBJS)
	cp $(LIB) $(NAME)
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIB) :
	make -C $(LIB_DIR) all

all : $(NAME)

re : fclean all

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)

bonus: $(LIB) $(OBJS_BONUS)
	cp $(LIB) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)

.PHONY: all clean fclean re bonus
