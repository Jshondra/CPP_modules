NAME		= bureaucrat

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp Intern.hpp

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
