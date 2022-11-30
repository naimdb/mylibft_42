# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 15:15:55 by nadel-be          #+#    #+#              #
#    Updated: 2022/11/30 13:07:11 by nadel-be         ###   ########.fr        #
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
SRCS =						\
	gnl/gnl_utils.c			\
	gnl/gnl.c				\
	int/ft_intlen.c			\
	int/ft_intlen_base.c	\
	is/ft_isalnum.c			\
	is/ft_isalpha.c			\
	is/ft_isascii.c			\
	is/ft_isdigit.c			\
	is/ft_isprint.c			\
	lst/ft_lstadd_back.c	\
	lst/ft_lstadd_front.c	\
	lst/ft_lstclear.c		\
	lst/ft_lstdelone.c		\
	lst/ft_lstiter.c		\
	lst/ft_lstlast.c		\
	lst/ft_lstmap.c			\
	lst/ft_lstnew.c			\
	lst/ft_lstsize.c		\
	mem/ft_memccpy.c		\
	mem/ft_memchr.c			\
	mem/ft_memcmp.c			\
	mem/ft_memcpy.c			\
	mem/ft_memmove.c		\
	mem/ft_memset.c			\
	printf/ft_convert_cent.c		\
	printf/ft_convert_char.c		\
	printf/ft_convert_hexa_lower.c	\
	printf/ft_convert_hexa_upper.c	\
	printf/ft_convert_int.c			\
	printf/ft_convert_ptr.c			\
	printf/ft_convert_str.c			\
	printf/ft_convert_uint.c		\
	printf/ft_parse.c				\
	printf/ft_printf.c				\
	put/ft_putchar_fd.c		\
	put/ft_putendl_fd.c		\
	put/ft_putnbr_base_fd.c	\
	put/ft_putnbr_fd.c		\
	put/ft_putstr_fd.c		\
	ft_bzero.c			\
	ft_calloc.c			\
	str/ft_split.c			\
	str/ft_strcat.c			\
	str/ft_strchr.c			\
	str/ft_strcmp.c			\
	str/ft_strcpy.c			\
	str/ft_strdup.c			\
	str/ft_striteri.c		\
	str/ft_strjoin.c		\
	str/ft_strlcat.c		\
	str/ft_strlcpy.c		\
	str/ft_strlen.c			\
	str/ft_strmapi.c		\
	str/ft_strncmp.c		\
	str/ft_strnstr.c		\
	str/ft_strrchr.c		\
	str/ft_strtrim.c		\
	str/ft_substr.c			\
	to/ft_atoi.c			\
	to/ft_itoa.c			\
	to/ft_tolower.c			\
	to/ft_toupper.c			\

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #
NAME			= libft.a

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
			@echo "Linking: $@"
			@$(AR) $(NAME) $(OBJS)
			@echo "$(Gre)Done!$(RCol)"
			@echo "$(Gre)██╗     ██╗██████╗ ███████╗████████╗"
			@echo "██║     ██║██╔══██╗██╔════╝╚══██╔══╝"
			@echo "██║     ██║██████╔╝█████╗     ██║   "
			@echo "██║     ██║██╔══██╗██╔══╝     ██║   "
			@echo "███████╗██║██████╔╝██║        ██║   "
			@echo "╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   $(RCol)"
			@echo "$(BIRed)   By Naïm (nadel-be)!   "
			@echo "   Last update : Novembre 2022  $(RCol)"

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re