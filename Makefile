# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: velbling <velbling@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 09:31:29 by velbling          #+#    #+#              #
#    Updated: 2022/12/05 11:38:38 by velbling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c \
	ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c \
	ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c \
	ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c \
	ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
	ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
	ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

Black = \033[0;30m
Red = \033[0;31m
Green = \033[0;32m
Yellow = \033[0;33m
Blue = \033[0;34m
Purple = \033[0;35m
Cyan = \033[0;36m
White = \033[0;37m
NoColor = \033[0m

amogus:
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀⠀⠀⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠋⠀$(Cyan)⠀⠀⠀⠀⠀⠀⢀⣀⣀$(Red)⠈⢻⣿⣿⡄⠀⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⣸⣿⡏⠀⠀$(Cyan)⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠁⠀⠀$(Cyan)⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀"
	@echo "$(Red)⠀⠀⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀$(Cyan)⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀"
	@echo "$(Red)⠀⢰⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀$(Cyan)⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀"
	@echo "$(Red)⠀⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀ $(Cyan)⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀"
	@echo "$(Red)⠀⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀ $(Cyan)⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛$(Red)⢻⣿⡇⠀⠀"
	@echo "$(Red)⠀⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀⠀"
	@echo "$(Red)⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀"
	@echo "$(Red)⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀"
	@echo "$(Red)⠀⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀"
	@echo "$(Red)⠀⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃⠀⠀"
	@echo "$(Red)⠀⠀⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀"
	@echo "$(Red)⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"

troll:
	@echo '	  ⢀⡔⠋⢉⠩⡉⠛⠛⠛⠉⣉⣉⠒⠒⡦⣄⠀⠀⠀⠀⠀⠀⠀ 	'
	@echo '	 ⢀⠎⠀⠀⠠⢃⣉⣀⡀⠂⠀⠀⠄⠀⠀⠀⠀⢱⠀⠀⠀⠀⠀⠀ 	'
	@echo '	⡰⠟⣀⢀⣒⠐⠛⡛⠳⢭⠆⠀⠤⡶⠿⠛⠂⠀⢈⠳⡀⠀⠀⠀⠀ 	'
	@echo '	⢸⢈⢘⢠⡶⢬⣉⠉⠀⠀⡤⠄⠀⠀⠣⣄⠐⠚⣍⠁⢘⡇⠀⠀⠀	'
	@echo '	⠈⢫⡊⠀⠹⡦⢼⣍⠓⢲⠥⢍⣁⣒⣊⣀⡬⢴⢿⠈⡜⠀⠀⠀⠀⠀ 	'
	@echo '	  ⠹⡄⠀⠘⢾⡉⠙⡿⠶⢤⣷⣤⣧⣤⣷⣾⣿⠀⡇⠀⠀⠀⠀⠀ 	'
	@echo '	   ⠘⠦⡠⢀⠍⡒⠧⢄⣀⣁⣀⣏⣽⣹⠽⠊⠀⡇⠀⠀⠀⠀⠀ 	'
	@echo '	     ⠈⠑⠪⢔⡁⠦⠀⢀⡤⠤⠤⠄⠀⠠⠀⡇⠀⠀⠀⠀⠀ 	'
	@echo '	         ⠈⠑⠲⠤⠤⣀⣀⣀⣀⣀⠔⠁		'