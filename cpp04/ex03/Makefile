NAME		= materia

SRCS		= main.cpp \
			AMateria.cpp \
						Cure.cpp \
							Ice.cpp \
							 MateriaSource.cpp \
							 	Character.cpp \

HEADER		= AMateria.hpp  MateriaSource.hpp \
			Cure.hpp Ice.hpp IMateriaSource.hpp \
				ICharacter.hpp Character.hpp
OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS 		= -Wall -Wextra -Werror -std=c++98

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
