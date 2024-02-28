# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:08:07 by asargsya          #+#    #+#              #
#    Updated: 2024/02/08 15:29:09 by asargsya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_isalpha.c ft_memcpy.c \
					ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_strdup.c  ft_strlen.c ft_toupper.c ft_calloc.c \
				   	ft_isdigit.c ft_memset.c ft_atoi.c ft_strncmp.c \
					ft_strchr.c ft_strrchr.c ft_strlcpy.c \
					ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c \
					ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c \
					ft_split.c

SRCSBNS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
					ft_lstiter.c ft_lstmap.c

OBJSBNS			=	$(SRCSBNS:.c=.o)
OBJS			=	$(SRCS:.c=.o)

CC				= 	cc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror 
AR				= 	ar rcs
NAME			= 	libft.a

all:			$(NAME)

%.o:%.c $(NAME) Makefile
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

bonus:			$(OBJSBNS)
				$(AR) $(NAME) $(OBJSBNS)
				
clean:
				$(RM) $(OBJS) $(OBJSBNS)

fclean:			clean
				$(RM) $(NAME) 

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
