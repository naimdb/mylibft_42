# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 15:58:23 by nadel-be          #+#    #+#              #
#    Updated: 2022/11/09 14:56:47 by nadel-be         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                    COLORS                                    #
# **************************************************************************** #
# Text Reset
RCol	= \033[0m

# Regular
Bla		= \033[0;30m
Red		= \033[0;31m
Gre		= \033[0;32m
Yel		= \033[0;33m
Blu		= \033[0;34m
Pur		= \033[0;35m
Cya		= \033[0;36m
Whi		= \033[0;37m

# Bold
BBla	= \033[1;30m
BRed	= \033[1;31m
BGre	= \033[1;32m
BYel	= \033[1;33m
BBlu	= \033[1;34m
BPur	= \033[1;35m
BCya	= \033[1;36m
BWhi	= \033[1;37m

# Underline
UBla	= \033[4;30m
URed	= \033[4;31m
UGre	= \033[4;32m
UYel	= \033[4;33m
UBlu	= \033[4;34m
UPur	= \033[4;35m
UCya	= \033[4;36m
UWhi	= \033[4;37m

# High Intensity
IBla	= \033[0;90m
IRed	= \033[0;91m
IGre	= \033[0;92m
IYel	= \033[0;93m
IBlu	= \033[0;94m
IPur	= \033[0;95m
ICya	= \033[0;96m
IWhi	= \033[0;97m

# BoldHigh Intens
BIBla	= \033[1;90m
BIRed	= \033[1;91m
BIGre	= \033[1;92m
BIYel	= \033[1;93m
BIBlu	= \033[1;94m
BIPur	= \033[1;95m
BICya	= \033[1;96m
BIWhi	= \033[1;97m

# Background
On_Bla	= \033[40m
On_Red	= \033[41m
On_Gre	= \033[42m
On_Yel	= \033[43m
On_Blu	= \033[44m
On_Pur	= \033[45m
On_Cya	= \033[46m
On_Whi	= \033[47m

# High Intensity Backgrounds
On_IBla	= \033[0;100m
On_IRed	= \033[0;101m
On_IGre	= \033[0;102m
On_IYel	= \033[0;103m
On_IBlu	= \033[0;104m
On_IPur	= \033[0;105m
On_ICya	= \033[0;106m
On_IWhi	= \033[0;107m

# **************************************************************************** #
#                                   SOURCES                                    #
# **************************************************************************** #
SRCS =									\
	ft_printf.c							\
	ft_parse.c							\
	convert/ft_convert_cent.c			\
	convert/ft_convert_char.c			\
	convert/ft_convert_hexa_lower.c		\
	convert/ft_convert_hexa_upper.c		\
	convert/ft_convert_int.c			\
	convert/ft_convert_uint.c			\
	convert/ft_convert_ptr.c			\
	convert/ft_convert_str.c			\
	main.c

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #
NAME			= libftprintf.a

LIBFT			= libft
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
AR				= ar rcs
CFLAGS			= -Wall -Wextra -Werror -I.

# **************************************************************************** #
#                                   COMMANDS                                   #
# **************************************************************************** #
all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a $(NAME)
			@echo "Linking: $@"
			@$(AR) $(NAME) $(OBJS)
			@echo "$(Gre)Done!$(RCol)"
			@echo "$(Gre)███████╗████████╗     ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗"
			@echo "██╔════╝╚══██╔══╝     ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝"
			@echo "█████╗     ██║        ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  "
			@echo "██╔══╝     ██║        ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  "
			@echo "██║        ██║███████╗██║     ██║  ██║██║██║ ╚████║   ██║   ██║     "
			@echo "╚═╝        ╚═╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     $(RCol)"
			@echo "$(Gre)                       By Naïm (nadel-be)!                         "
			@echo "                    Last update : Novembre 2022                     $(RCol)"

clean:
			@echo "$(Red)Removing objects: $(RCol)"
			$(RM) $(OBJS)
			@make clean -C $(LIBFT)

fclean:		clean
			@echo "Removing $(NAME)"
			$(RM) $(NAME)
			$(RM) libft.a
			@make fclean -C $(LIBFT)

re:			fclean $(NAME)
			@make re -C $(LIBFT)

.PHONY:		all clean fclean re
