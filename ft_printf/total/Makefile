# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 17:13:44 by hyunkkim          #+#    #+#              #
#    Updated: 2022/02/16 17:58:39 by hyunkkim         ###   ########seoul.kr   #
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
CP=cp
SRC= ft_printf.c \
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

SRC_BONUS= ft_printf_bonus.c \
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

OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)
BONUS=0

ifeq ($(BONUS), 1)
	OBJS=$(OBJ_BONUS) $(OBJ)
else
	OBJS=$(OBJ)
endif

$(NAME) : $(LIB) $(OBJS)
	$(CP) $(LIB) $(NAME)
	$(AR) $(ARFLAGS) $@ $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

$(LIB) :
	make -C $(LIB_DIR) all

all : $(NAME)

re : fclean all

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)

bonus :
	make BONUS=1 all

.PHONY: all clean fclean re bonus
