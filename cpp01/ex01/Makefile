NAME		= zombie

SRCS		= main.cpp Zombie.cpp ZombieHorde.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS 		= -Wall -Wextra -Werror

.cpp.o:
			clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
re:			fclean all

.PHONY:		all clean fclean re
