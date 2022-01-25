NAME = libft.a
SRCS = srcs/ft_strlen.c \
srcs/ft_strcpy.c \
srcs/ft_strncpy.c \
srcs/ft_strcat.c \
srcs/ft_strncat.c \
srcs/ft_strcmp.c \
srcs/ft_strncmp.c \
srcs/ft_isalpha.c \
srcs/ft_isdigit.c \
srcs/ft_isalnum.c \
srcs/ft_isascii.c \
srcs/ft_isprint.c \
srcs/ft_toupper.c \
srcs/ft_tolower.c \


INCLUDES = includes 
OBJS = ${SRCS:.c=.o}
CFLAGS = gcc -Wall -Wextra -Werror
RM = rm -r


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c 
	$(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re

	