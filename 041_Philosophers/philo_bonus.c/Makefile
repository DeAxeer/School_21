SRCS =		main.c

HEADERS = 	philo.h

OBJS =		$(SRCS:.c=.o)

NAME =		philo_bonus

CC			= gcc 
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -I.

$(NAME):		$(OBJS)
			$(CC) $(OBJS) $(LINKS) $(LIBFT) -o $(NAME)

all:			$(NAME)

%.o:			%.c $(HEADERS)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:			clean
			$(RM) $(NAME)

re:				fclean all

.PHONY: all clean fclean re
