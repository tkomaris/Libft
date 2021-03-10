# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/12 13:04:00 by tkomaris          #+#    #+#              #
#    Updated: 2021/02/02 15:42:09 by tkomaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRC 	=		ft_atoi.c \
				ft_isalpha.c \
				ft_itoa.c \
				ft_memcpy.c \
				ft_putendl_fd.c \
				ft_strchr.c \
				ft_strlcpy.c \
				ft_strnstr.c \
				ft_tolower.c \
				ft_bzero.c \
				ft_isascii.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_putnbr_fd.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_strrchr.c \
				ft_toupper.c \
				ft_calloc.c \
				ft_isdigit.c \
				ft_memchr.c \
				ft_memset.c \
				ft_putstr_fd.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_strtrim.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_memcmp.c \
				ft_putchar_fd.c \
				ft_split.c \
				ft_strlcat.c \
				ft_strncmp.c \
				ft_substr.c

OBJS 		=	$(SRC:.c=.o)

SRC_BONUS	= 	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS_BONUS	= 	$(SRC_BONUS:.c=.o)

CC 			= 	clang

FLAGS 		= 	-Wall -Wextra -Werror

all			:	$(NAME)

%.o			:	%.c
        		$(CC) $(CFLAGS) -c $< -o $@

$(NAME)     :   $(OBJS)
                ar rc $(NAME) $(OBJS)

clean		:	
				rm -Rf $(OBJS) $(OBJS_BONUS)

fclean		:	clean
				rm -Rf $(NAME)

re 			: 	fclean all

bonus		:	$(OBJS_BONUS) $(OBJS)
				ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
