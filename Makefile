# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 10:35:15 by aouhadou          #+#    #+#              #
#    Updated: 2021/12/06 10:35:18 by aouhadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER=ft_printf.h

SRC_FILE = ft_printf.c ft_hexa_up.c ft_putchar.c ft_putnbr_u.c\
		ft_putnbr_x.c ft_putnbr.c ft_putstr.c ft_print_pointer.c\

NAME = libftprintf.a
OBJ_FILE = $(SRC_FILE:.c=.o)
all: $(NAME)

$(NAME):	$(OBJ_FILE) $(HEADER)
		ar rc $(NAME) $(OBJ_FILE)

%.o: %.c ${HEADER}
		gcc -Wall -Werror -Wextra -c $<

clean:
	rm -f $(OBJ_FILE)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
.PHONY : all clean fclean re
