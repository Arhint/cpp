NAME = contacts

SRC = Contacts.cpp main.cpp

FLG = -Wall -Wextra -Werror

OBJ = $(SRC:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJ)
	@clang++ $(FLG) -o $(NAME) $(OBJ)

%.o: %.cpp
	@clang++ -c $(FLG) -o $@ $<
	@echo "\033[0;32mcompile done\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[0;31mdelete: objects"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "delete:" $(NAME)

re: fclean all
