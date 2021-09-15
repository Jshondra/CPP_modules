NAME		= animals

SRCS		= main.cpp Animals.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

HEADER		= Animals.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS 		= -Wall -Wextra -Werror -std=c++98  -Wshadow -Wno-shadow

.cpp.o:
			clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}
			
all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
