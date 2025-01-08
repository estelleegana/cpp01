#nom du programme
NAME = violence

#compilateur
CC = c++

#flag(s)
FLAGS = -Wall -Wextra -Werror -std=c++98

#autres raccourcis
RM = rm -rf

#fichier(s) source(s)
SRCS = HumanA.cpp \
	HumanB.cpp \
	main.cpp \
	Weapon.cpp \


#creation de fichier(s) objet(s) a partir de fichier(s) source(s)
OBJS = $(SRCS:.cpp=.o)

#compiler le prgrm
$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

testA: fclean
	c++ -Wall -Wextra -Werror -std=c++98 -o testA HumanA.cpp main.cpp Weapon.cpp

testB: fclean
	c++ -Wall -Wextra -Werror -std=c++98 -o testB HumanB.cpp main.cpp Weapon.cpp

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
