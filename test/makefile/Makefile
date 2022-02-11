# He escrito este como un ejercicio de memoria para practicar con make

SRCS = 	ft_atoi.c \
		ft_calloc.c

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstadd_back.c \
		ft_lstadd_front.c

BONUS_OBJS = $(BONUS:.c=.o)



CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
NAME = libft.a
RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME) = $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

bonus: $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)