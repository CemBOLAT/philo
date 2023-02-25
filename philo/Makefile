NAME= philo
FLAGS = -Wall -Wextra -Werror


all: $(NAME)


$(NAME):
	@gcc $(FLAGS) *.c -o philo

clean:

fclean: clean
	@rm -rf philo

re : fclean all

.PHONY : clean fclean re all
