NAME= philo_bonus
FLAGS= -pthread -Wall -Wextra -Werror
SRC= $(shell find . -name "*.c")
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[1;32m====================================\033[0m"
	@echo "\033[1;34m$(NAME) is created !\033[0m"
	@gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@echo "\033[1;32m====================================\033[0m"
	@echo "\033[1;34m$(OBJ) are cleaned!\033[0m"
	@rm -rf $(OBJ)
	@echo "\033[1;32m====================================\033[0m"

fclean: clean
	@echo "\033[1;34m$(NAME) is cleaned!\033[0m"
	@rm -rf $(NAME)
	@echo "\033[1;32m====================================\033[0m"


re : fclean all

.PHONY : clean fclean re all
