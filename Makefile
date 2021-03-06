# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 11:25:34 by borjagrd          #+#    #+#              #
#    Updated: 2020/10/20 10:43:07 by bgomez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DELETE_ON_ERROR:

NAME		=	libftprintf.a

LIBFT		=	libft.a

SRCS		=	ft_printf.c \
				initialize_flags.c \
				check_flags.c \
				check_type.c \
				minus_zero_flag.c \
				flag_zero_percent.c \
				width_flag.c \
				precision_flag.c \
				flags_trigger.c \
				int_counter.c \
				hexade_countdigits.c \
				flag_width_integer.c \
				flag_width_string.c \
				flag_width_pointer.c \
				type_integer.c \
				type_unsigned_int.c \
				type_string.c \
				type_char.c \
				type_hexade_low.c \
				type_hexade_upper.c \
				type_pointer.c \
				type_percent.c \
				flag_zero_integer.c \
				flag_precision_integer.c \
				flag_precision_string.c \
				print_integer_width.c \
				print_negative.c \
				print_string_width.c \
				print_integer.c \
				print_unsigned.c \
				print_string.c \
				print_hexade_low.c \
				print_hexade_upper.c \
				print_hexade_upper.c \
				print_pointer.c \
				print_pointer_width.c \
				flag_minus_integer.c \
				flag_minus_string.c \
				flag_minus_pointer.c \
				flag_minus_pointer.c \
				flag_minus_percent.c \
				hexade_zero.c \
				itoa_unsigned.c \
				flag_precision_pointer.c \
				pointer_countdigits.c \
				main.c

CC			= @gcc

CFLAGS		= -Wall -Wextra -Werror -g

OBJS		= $(SRCS:.c=.o)

INCLUDE		= ./libft

AR			= ar rcs

RM			= rm -rf

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
				echo "\n\n\n	FASE DE COMPILADO DEL PROGRAMA 'libft.a' \n"
				@$(CC) $(CFLAGS) -c $(SRCS)
				@make -C $(INCLUDE)
				@cp libft/libft.a ./
				@mv libft.a $(NAME)
				echo "\n\n\n	GENERANDO LIBRERIA 'libftprintf.a' \n"
				@$(AR) $(NAME) $(OBJS)
				@ranlib $(NAME)
				echo "\nINDEX libftprintf.a	GENERADO CON ÉXITO\n\n\n"
				@$(CC) -g -L ./ libftprintf.a main.c

clean:
			$(RM) $(OBJS)
			make -C $(INCLUDE) clean

fclean:		clean
				@$(RM) $(NAME)
				@make -C $(INCLUDE) fclean
				@$(RM) a.out a.out.dSYM

re:			fclean all

.PHONY:		all clean fclean re
